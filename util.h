/*
 * util - various utilities
 * Copyright 2009 Greg Hewgill
 *
 * This file is part of Emulino.
 *
 * Emulino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Emulino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Emulino.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __UTIL_H
#define __UTIL_H

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned long u32;

#ifndef __cplusplus
typedef int bool;
#define false   0
#define true    (!false)
#endif

#define BIT(b) (1 << (b))

#define LENGTHOF(x) (sizeof(x) / sizeof((x)[0]))

// based on Linux BUILD_BUG_ON macro
#define COMPILE_ASSERT(e) ((void)sizeof(char[1 - 2*!(e)]))

#ifdef __GNUC__
#define ATTRIBUTE_UNUSED __attribute__ ((unused))
#else
#define ATTRIBUTE_UNUSED
#endif

#endif // __UTIL_H
