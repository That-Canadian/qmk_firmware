/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#undef SUBPROJECT_rev1

/* key matrix size */
// Only 1 side because using it as a gamepad
#undef MATRIX_ROWS
#undef MATRIX_COLS
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

// Keymap definition for gamepad
#undef KEYMAP

#define KEYMAP( \
	L00, L01, L02, L03, L04, L05, \
	L10, L11, L12, L13, L14, L15, \
	L20, L21, L22, L23, L24, L25, \
	L30, L31, L32, L33, L34, L35, \
    L40, L41, L42, L43, L44, L45  \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ L40, L41, L42, L43, L44, L45 }  \
	}

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define _MASTER_RIGHT
// #define EE_HANDS

#endif