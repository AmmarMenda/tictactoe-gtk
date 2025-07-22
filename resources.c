#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1877]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\254\000\000\000\000\000\000\050\005\000\000\000"
  "\000\000\000\000\003\000\000\000\004\000\000\000\005\000\000\000"
  "\005\000\000\000\024\272\142\056\003\000\000\000\254\000\000\000"
  "\011\000\166\000\270\000\000\000\052\007\000\000\324\265\002\000"
  "\377\377\377\377\052\007\000\000\001\000\114\000\054\007\000\000"
  "\060\007\000\000\375\337\223\021\004\000\000\000\060\007\000\000"
  "\010\000\114\000\070\007\000\000\074\007\000\000\114\027\010\270"
  "\002\000\000\000\074\007\000\000\012\000\114\000\110\007\000\000"
  "\114\007\000\000\302\257\211\013\001\000\000\000\114\007\000\000"
  "\004\000\114\000\120\007\000\000\124\007\000\000\163\164\171\154"
  "\145\056\143\163\163\000\000\000\142\006\000\000\000\000\000\000"
  "\057\052\012\040\052\040\103\171\142\145\162\160\165\156\153\040"
  "\062\060\067\067\040\111\156\163\160\151\162\145\144\040\124\150"
  "\145\155\145\012\040\052\040\055\040\131\145\154\154\157\167\072"
  "\040\043\106\103\105\105\060\101\040\050\111\143\157\156\151\143"
  "\040\103\171\142\145\162\160\165\156\153\040\131\145\154\154\157"
  "\167\051\012\040\052\040\055\040\102\154\165\145\055\107\162\145"
  "\171\072\040\043\101\071\104\061\104\104\040\050\115\165\164\145"
  "\144\054\040\162\145\141\144\141\142\154\145\040\164\145\170\164"
  "\040\143\157\154\157\162\051\012\040\052\040\055\040\102\141\143"
  "\153\147\162\157\165\156\144\072\040\043\061\062\061\062\061\062"
  "\040\050\104\141\162\153\054\040\163\154\151\147\150\164\154\171"
  "\040\157\146\146\055\142\154\141\143\153\051\012\040\052\057\012"
  "\012\057\052\040\125\156\151\166\145\162\163\141\154\040\146\157"
  "\156\164\040\163\164\171\154\145\040\052\057\012\052\040\173\012"
  "\040\040\040\040\146\157\156\164\055\146\141\155\151\154\171\072"
  "\040\155\157\156\157\163\160\141\143\145\073\012\175\012\012\057"
  "\052\040\123\164\171\154\145\040\146\157\162\040\164\150\145\040"
  "\155\141\151\156\040\167\151\156\144\157\167\040\141\156\144\040"
  "\144\151\141\154\157\147\163\040\052\057\012\167\151\156\144\157"
  "\167\054\012\144\151\141\154\157\147\040\173\012\040\040\040\040"
  "\142\141\143\153\147\162\157\165\156\144\055\143\157\154\157\162"
  "\072\040\043\061\062\061\062\061\062\073\012\175\012\012\057\052"
  "\040\123\164\171\154\145\040\146\157\162\040\164\145\170\164\040"
  "\145\156\164\162\171\040\146\151\145\154\144\163\040\151\156\040"
  "\164\150\145\040\144\151\141\154\157\147\040\052\057\012\145\156"
  "\164\162\171\040\173\012\040\040\040\040\142\141\143\153\147\162"
  "\157\165\156\144\055\143\157\154\157\162\072\040\043\061\141\061"
  "\141\061\141\073\012\040\040\040\040\143\157\154\157\162\072\040"
  "\043\141\071\144\061\144\144\073\040\057\052\040\102\154\165\145"
  "\055\147\162\145\171\040\146\157\162\040\164\171\160\145\144\040"
  "\164\145\170\164\040\052\057\012\040\040\040\040\142\157\162\144"
  "\145\162\072\040\061\160\170\040\163\157\154\151\144\040\043\146"
  "\143\145\145\060\141\073\040\057\052\040\131\145\154\154\157\167"
  "\040\142\157\162\144\145\162\040\052\057\012\040\040\040\040\142"
  "\157\162\144\145\162\055\162\141\144\151\165\163\072\040\060\073"
  "\012\040\040\040\040\143\141\162\145\164\055\143\157\154\157\162"
  "\072\040\043\146\143\145\145\060\141\073\040\057\052\040\115\141"
  "\153\145\040\164\150\145\040\164\171\160\151\156\147\040\143\165"
  "\162\163\157\162\040\171\145\154\154\157\167\040\052\057\012\175"
  "\012\012\057\052\040\123\164\171\154\145\040\146\157\162\040\154"
  "\141\142\145\154\163\040\151\156\163\151\144\145\040\164\150\145"
  "\040\144\151\141\154\157\147\040\052\057\012\144\151\141\154\157"
  "\147\040\154\141\142\145\154\040\173\012\040\040\040\040\143\157"
  "\154\157\162\072\040\043\141\071\144\061\144\144\073\040\057\052"
  "\040\102\154\165\145\055\147\162\145\171\040\146\157\162\040\163"
  "\145\143\157\156\144\141\162\171\040\164\145\170\164\040\052\057"
  "\012\175\012\012\057\052\040\107\145\156\145\162\141\154\040\142"
  "\165\164\164\157\156\040\163\164\171\154\145\054\040\165\163\151"
  "\156\147\040\164\150\145\040\160\162\151\155\141\162\171\040\171"
  "\145\154\154\157\167\040\052\057\012\142\165\164\164\157\156\040"
  "\173\012\040\040\040\040\142\141\143\153\147\162\157\165\156\144"
  "\055\143\157\154\157\162\072\040\164\162\141\156\163\160\141\162"
  "\145\156\164\073\012\040\040\040\040\142\157\162\144\145\162\072"
  "\040\062\160\170\040\163\157\154\151\144\040\043\146\143\145\145"
  "\060\141\073\012\040\040\040\040\142\157\162\144\145\162\055\162"
  "\141\144\151\165\163\072\040\060\073\012\040\040\040\040\143\157"
  "\154\157\162\072\040\043\146\143\145\145\060\141\073\012\040\040"
  "\040\040\146\157\156\164\055\163\151\172\145\072\040\061\066\160"
  "\170\073\012\040\040\040\040\146\157\156\164\055\167\145\151\147"
  "\150\164\072\040\142\157\154\144\073\012\040\040\040\040\164\145"
  "\170\164\055\163\150\141\144\157\167\072\040\060\040\060\040\065"
  "\160\170\040\043\146\143\145\145\060\141\073\012\175\012\012\142"
  "\165\164\164\157\156\072\150\157\166\145\162\040\173\012\040\040"
  "\040\040\142\141\143\153\147\162\157\165\156\144\055\143\157\154"
  "\157\162\072\040\162\147\142\141\050\062\065\062\054\040\062\063"
  "\070\054\040\061\060\054\040\060\056\061\051\073\040\057\052\040"
  "\106\141\151\156\164\040\171\145\154\154\157\167\040\147\154\157"
  "\167\040\157\156\040\150\157\166\145\162\040\052\057\012\040\040"
  "\040\040\142\157\170\055\163\150\141\144\157\167\072\040\060\040"
  "\060\040\061\060\160\170\040\043\146\143\145\145\060\141\073\012"
  "\175\012\012\057\052\040\123\164\171\154\145\040\146\157\162\040"
  "\120\154\141\171\145\162\040\130\047\163\040\155\141\162\153\040"
  "\050\120\162\151\155\141\162\171\040\131\145\154\154\157\167\051"
  "\040\052\057\012\056\155\141\162\153\055\170\040\173\012\040\040"
  "\040\040\143\157\154\157\162\072\040\043\146\143\145\145\060\141"
  "\073\012\040\040\040\040\146\157\156\164\055\163\151\172\145\072"
  "\040\063\066\160\170\073\012\040\040\040\040\146\157\156\164\055"
  "\167\145\151\147\150\164\072\040\142\157\154\144\073\012\040\040"
  "\040\040\164\145\170\164\055\163\150\141\144\157\167\072\012\040"
  "\040\040\040\040\040\040\040\060\040\060\040\063\160\170\040\043"
  "\146\143\145\145\060\141\054\012\040\040\040\040\040\040\040\040"
  "\060\040\060\040\070\160\170\040\043\146\143\145\145\060\141\073"
  "\012\175\012\012\057\052\040\123\164\171\154\145\040\146\157\162"
  "\040\120\154\141\171\145\162\040\117\047\163\040\155\141\162\153"
  "\040\050\123\145\143\157\156\144\141\162\171\040\102\154\165\145"
  "\055\107\162\145\171\051\040\052\057\012\056\155\141\162\153\055"
  "\157\040\173\012\040\040\040\040\143\157\154\157\162\072\040\043"
  "\141\071\144\061\144\144\073\012\040\040\040\040\146\157\156\164"
  "\055\163\151\172\145\072\040\063\066\160\170\073\012\040\040\040"
  "\040\146\157\156\164\055\167\145\151\147\150\164\072\040\142\157"
  "\154\144\073\012\040\040\040\040\164\145\170\164\055\163\150\141"
  "\144\157\167\072\040\060\040\060\040\065\160\170\040\043\141\071"
  "\144\061\144\144\073\012\175\012\012\057\052\040\123\164\171\154"
  "\145\040\146\157\162\040\164\150\145\040\155\141\151\156\040\151"
  "\156\146\157\040\154\141\142\145\154\054\040\165\163\151\156\147"
  "\040\164\150\145\040\160\162\151\155\141\162\171\040\171\145\154"
  "\154\157\167\040\052\057\012\043\151\156\146\157\137\154\141\142"
  "\145\154\040\173\012\040\040\040\040\143\157\154\157\162\072\040"
  "\043\146\143\145\145\060\141\073\012\040\040\040\040\146\157\156"
  "\164\055\163\151\172\145\072\040\061\070\160\170\073\012\040\040"
  "\040\040\164\145\170\164\055\163\150\141\144\157\167\072\040\060"
  "\040\060\040\065\160\170\040\043\146\143\145\145\060\141\073\012"
  "\175\012\000\000\050\165\165\141\171\051\057\000\004\000\000\000"
  "\145\170\141\155\160\154\145\057\003\000\000\000\164\151\143\164"
  "\141\143\164\157\145\057\000\000\000\000\000\000\143\157\155\057"
  "\002\000\000\000" };

static GStaticResource static_resource = { resources_resource_data.data, sizeof (resources_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *resources_get_resource (void);
GResource *resources_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER)

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resourcesresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resourcesresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resourcesresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resourcesresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resourcesresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resourcesresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
