#ifndef REV1_H
#define REV1_H

#include "drezzed.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

//void promicro_bootloader_jmp(bool program);

#define KEYMAP( \
	L11, L12, L13, L14, L15, L16,                R12, R13, R14, R15, R16, R17, \
	L21, L22, L23, L24, L25, L26,                R22, R23, R24, R25, R26, R27, \
	L31, L32, L33, L34, L35, L36, L37,      R31, R32, R33, R34, R35, R36, R37, \
    L41, L42, L43, L44, L45, L46, L47,      R41, R42, R43, R44, R45, R46, R47, \
    L51, L52, L53, L54, L55,                          R53, R54, R55, R56, R57, \
                             L66, L67,      R61, R62  \
	) \
	{ \
		{ L11,   L12,   L13,   L14,   L15,   L16,   KC_NO }, \
		{ L21,   L22,   L23,   L24,   L25,   L26,   KC_NO }, \
		{ L31,   L32,   L33,   L34,   L35,   L36,   L37 }, \
		{ L41,   L42,   L43,   L44,   L45,   L46,   L47 }, \
        { L51,   L52,   L53,   L54,   L55,   KC_NO, KC_NO }, \
        { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L66,   L67 }, \
        \
		{ R17,   R16,   R15,   R14,   R13,   R12,   KC_NO }, \
		{ R27,   R26,   R25,   R24,   R23,   R22,   KC_NO }, \
		{ R37,   R36,   R35,   R34,   R33,   R32,   R31 }, \
		{ R47,   R46,   R45,   R44,   R43,   R42,   R41 }, \
        { R57,   R56,   R55,   R54,   R53,   KC_NO, KC_NO }, \
        { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, R62,   R61 } \
	}
	
#endif