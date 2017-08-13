#ifndef REV1_H
#define REV1_H

#include "../nyquist_gamepad.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

// Standard Keymap
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

#endif
