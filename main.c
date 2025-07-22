#include <gtk/gtk.h>
#include <string.h>
#include "resources.c" // Include the compiled resources

// --- Global variables ---
// This section was missing in your file, which caused the error.
GtkWidget *buttons[3][3];
char board[3][3];
gboolean is_player_x_turn = TRUE;
int move_count = 0;
GtkWidget *info_label;
gchar *player_x_name = NULL;
gchar *player_o_name = NULL;

// --- Function Declarations ---
static void on_name_dialog_response(GtkDialog *dialog, int response_id, gpointer user_data);
static void activate(GtkApplication *app, gpointer user_data);

void update_info_label() {
    const char *current_player_name = is_player_x_turn ? player_x_name : player_o_name;
    gchar *message = g_strdup_printf("%s's turn ('%c')", current_player_name, is_player_x_turn ? 'X' : 'O');
    gtk_label_set_text(GTK_LABEL(info_label), message);
    g_free(message);
}

void reset_game() {
    is_player_x_turn = TRUE;
    move_count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gtk_button_set_child(GTK_BUTTON(buttons[i][j]), NULL);
            gtk_widget_set_sensitive(buttons[i][j], TRUE);
            board[i][j] = ' ';
        }
    }
    update_info_label();
}

void check_for_winner() {
    char winner = ' ';
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) winner = board[i][0];
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) winner = board[0][i];
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) winner = board[0][0];
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) winner = board[0][2];

    gchar *message = NULL;
    if (winner != ' ' || move_count == 9) {
        if (winner != ' ') {
            const char *winner_name = (winner == 'X') ? player_x_name : player_o_name;
            message = g_strdup_printf("%s wins!", winner_name);
        } else {
            message = g_strdup("It's a draw!");
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                gtk_widget_set_sensitive(buttons[i][j], FALSE);
            }
        }
    } else {
        const char *turn_player_name = is_player_x_turn ? player_x_name : player_o_name;
        message = g_strdup_printf("%s's turn ('%c')", turn_player_name, is_player_x_turn ? 'X' : 'O');
    }

    gtk_label_set_text(GTK_LABEL(info_label), message);
    g_free(message);
}

void on_button_clicked(GtkWidget *widget, gpointer data) {
    int *coords = (int *)data;
    int row = coords[0];
    int col = coords[1];

    if (board[row][col] == ' ') {
        const char *mark = is_player_x_turn ? "X" : "O";
        const char *css_class = is_player_x_turn ? "mark-x" : "mark-o";
        board[row][col] = is_player_x_turn ? 'X' : 'O';

        GtkWidget *label = gtk_label_new(mark);
        gtk_widget_add_css_class(label, css_class);
        gtk_button_set_child(GTK_BUTTON(widget), label);

        gtk_widget_set_sensitive(widget, FALSE);
        move_count++;
        is_player_x_turn = !is_player_x_turn;
        check_for_winner();
    }
}

static void on_name_dialog_response(GtkDialog *dialog, int response_id, gpointer user_data) {
    GtkWidget *window = GTK_WIDGET(user_data);

    if (response_id == GTK_RESPONSE_ACCEPT) {
        GtkWidget *content_area = gtk_dialog_get_content_area(dialog);
        GtkWidget *grid = gtk_widget_get_first_child(content_area);
        GtkWidget *entry_x = gtk_grid_get_child_at(GTK_GRID(grid), 1, 0);
        GtkWidget *entry_o = gtk_grid_get_child_at(GTK_GRID(grid), 1, 1);

        const char* p1 = gtk_editable_get_text(GTK_EDITABLE(entry_x));
        const char* p2 = gtk_editable_get_text(GTK_EDITABLE(entry_o));

        player_x_name = g_strdup((strlen(p1) > 0) ? p1 : "Player 1");
        player_o_name = g_strdup((strlen(p2) > 0) ? p2 : "Player 2");

        update_info_label();
        gtk_window_present(GTK_WINDOW(window));
    } else {
        gtk_window_destroy(GTK_WINDOW(window));
    }

    gtk_window_destroy(GTK_WINDOW(dialog));
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkCssProvider *provider = gtk_css_provider_new();
    gtk_css_provider_load_from_resource(provider, "/com/example/tictactoe/style.css");

    gtk_style_context_add_provider_for_display(
        gdk_display_get_default(),
        GTK_STYLE_PROVIDER(provider),
        GTK_STYLE_PROVIDER_PRIORITY_APPLICATION
    );
    g_object_unref(provider);

    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Tic-Tac-Toe");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 400);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_widget_set_margin_start(vbox, 10);
    gtk_widget_set_margin_end(vbox, 10);
    gtk_widget_set_margin_top(vbox, 10);
    gtk_widget_set_margin_bottom(vbox, 10);
    gtk_window_set_child(GTK_WINDOW(window), vbox);

    GtkWidget *grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 5);
    gtk_box_append(GTK_BOX(vbox), grid);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buttons[i][j] = gtk_button_new();
            gtk_widget_set_size_request(buttons[i][j], 100, 100);
            int *coords = g_new(int, 2);
            coords[0] = i; coords[1] = j;
            g_signal_connect(buttons[i][j], "clicked", G_CALLBACK(on_button_clicked), coords);
            gtk_grid_attach(GTK_GRID(grid), buttons[i][j], j, i, 1, 1);
            board[i][j] = ' ';
        }
    }

    info_label = gtk_label_new("Welcome!");
    gtk_widget_set_name(info_label, "info_label");
    gtk_box_append(GTK_BOX(vbox), info_label);

    GtkWidget *reset_button = gtk_button_new_with_label("New Game");
    g_signal_connect_swapped(reset_button, "clicked", G_CALLBACK(reset_game), NULL);
    gtk_box_append(GTK_BOX(vbox), reset_button);

    GtkWidget *dialog = gtk_dialog_new_with_buttons("Player Names", GTK_WINDOW(window),
                                         GTK_DIALOG_MODAL | GTK_DIALOG_DESTROY_WITH_PARENT,
                                         "Cancel", GTK_RESPONSE_CANCEL,
                                         "Start Game", GTK_RESPONSE_ACCEPT,
                                         NULL);

    GtkWidget *content_area = gtk_dialog_get_content_area(GTK_DIALOG(dialog));
    GtkWidget *grid_dialog = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid_dialog), 10);
    gtk_grid_set_row_spacing(GTK_GRID(grid_dialog), 10);
    gtk_widget_set_margin_start(grid_dialog, 10);
    gtk_widget_set_margin_end(grid_dialog, 10);
    gtk_widget_set_margin_top(grid_dialog, 10);
    gtk_widget_set_margin_bottom(grid_dialog, 10);
    gtk_box_append(GTK_BOX(content_area), grid_dialog);

    GtkWidget *label_x = gtk_label_new("Player X (Player 1):");
    GtkWidget *entry_x = gtk_entry_new();
    gtk_editable_set_text(GTK_EDITABLE(entry_x), "Player 1");

    GtkWidget *label_o = gtk_label_new("Player O (Player 2):");
    GtkWidget *entry_o = gtk_entry_new();
    gtk_editable_set_text(GTK_EDITABLE(entry_o), "Player 2");

    gtk_grid_attach(GTK_GRID(grid_dialog), label_x, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid_dialog), entry_x, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid_dialog), label_o, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid_dialog), entry_o, 1, 1, 1, 1);

    g_signal_connect(dialog, "response", G_CALLBACK(on_name_dialog_response), window);
    gtk_window_present(GTK_WINDOW(dialog));
}

int main(int argc, char *argv[]) {
    GtkApplication *app = gtk_application_new("com.example.tictactoe", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    g_free(player_x_name);
    g_free(player_o_name);

    return status;
}
