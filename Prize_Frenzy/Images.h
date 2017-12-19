#ifndef IMAGES_H
#define IMAGES_H

const unsigned char left_indicator[] PROGMEM = {0x00, 0x00, 0x18, 0x3c, 0x7e, 0xff, 0x00, 0x00};
const unsigned char right_indicator[] PROGMEM = {0x00, 0x00, 0xff, 0x7e, 0x3c, 0x18, 0x00, 0x00};

const uint8_t time_image[] PROGMEM = {0xe, 0x11, 0x17, 0x15, 0xe};

const uint8_t basket_image[] PROGMEM = {0x3, 0xf, 0x73, 0xab, 0x57, 0xab, 0x57, 0xab, 0x57, 0xab, 0x57, 0xab, 0xd7, 0x7b, 0xf, 0x3, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00};

const uint8_t main_menu_image[] PROGMEM = {0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xcc, 0x4c, 0x4c, 0x4c, 0x8c, 0xc, 0x18, 0x70, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xcc, 0x4c, 0x4c, 0x4c, 0x4c, 0x4c, 0x8c, 0xc, 0x18, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x90, 0x9c, 0x9c, 0x9c, 0x9c, 0x60, 0x60, 0x9c, 0x9c, 0x9c, 0x9c, 0x10, 0x90, 0x80, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xcf, 0xc8, 0xc8, 0xc8, 0xc8, 0xc7, 0xc0, 0x70, 0x3f, 0xf, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xe0, 0xc7, 0x84, 0x4, 0x64, 0xe4, 0xe4, 0x63, 0x60, 0x70, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3, 0x3, 0x83, 0xc3, 0x63, 0x33, 0x1b, 0xf, 0x7, 0x3, 0x81, 0xc0, 0x60, 0x30, 0x18, 0xf, 0x7, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xcf, 0x48, 0x48, 0x48, 0x48, 0x48, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0x00, 0x00, 0xfb, 0xfb, 0xfb, 0x1, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0x3, 0x3, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xe0, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xef, 0x6f, 0xe0, 0x60, 0xef, 0xef, 0x1, 0x7, 0xec, 0xe0, 0xe3, 0x6f, 0xec, 0x68, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x6f, 0xef, 0x40, 0xc0, 0x00, 0x8f, 0x8f, 0xe0, 0xe0, 0x60, 0xe0, 0x6e, 0xef, 0x61, 0xe0, 0x60, 0xe0, 0x60, 0xe4, 0x66, 0xe7, 0xe7, 0xe6, 0x6, 0x86, 0xe6, 0xee, 0x6e, 0xe0, 0x60, 0xe0, 0xc0, 0x8f, 0xf, 0x80, 0x00, 0xe0, 0xe7, 0xe4, 0x64, 0xe4, 0xe4, 0xe4, 0x4, 0x84, 0xe4, 0xec, 0x6c, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0x60, 0xe0, 0xe0, 0x00, 0x00, 0xe0, 0xe0, 0x67, 0xe7, 0x67, 0xe7, 0xe7, 0x7, 0x7, 0x00, 0x00, 0x7, 0xe7, 0xe7, 0x67, 0xe7, 0x67, 0xe7, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xaa, 0x55, 0xaa, 0x7d, 0xa6, 0x65, 0xa6, 0x65, 0xe6, 0xe5, 0x6, 0x5, 0x7, 0x7, 0x00, 0x00, 0xff, 0xff, 0xaa, 0x55, 0xaa, 0x7f, 0xa2, 0x63, 0xa2, 0x63, 0xa2, 0x5d, 0xaa, 0xd5, 0xff, 0x7f, 0x00, 0x00, 0xff, 0xff, 0x55, 0xaa, 0x55, 0xfe, 0x45, 0xc6, 0x45, 0xc6, 0x45, 0xc6, 0x5, 0x6, 0x7, 0x7, 0x00, 0x00, 0xff, 0xff, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xab, 0x57, 0xae, 0x5c, 0xbf, 0x7f, 0xaa, 0x55, 0xaa, 0xff, 0xff, 0x00, 0x00, 0x1f, 0x1f, 0x1d, 0x1a, 0x1d, 0x9a, 0xdd, 0xfa, 0x7d, 0xba, 0x5d, 0xaa, 0x55, 0xea, 0xd5, 0x7f, 0x3f, 0x00, 0x00, 0x3f, 0x7f, 0x75, 0x6a, 0x75, 0x6f, 0xff, 0xe8, 0x58, 0xa8, 0x58, 0xe8, 0xff, 0x6f, 0x75, 0x6a, 0x75, 0x7f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xaa, 0x55, 0xaa, 0xff, 0xfe, 0x3, 0x2, 0x3, 0x3, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xaa, 0x55, 0xaa, 0x55, 0xfa, 0x35, 0x6a, 0xd5, 0xaa, 0x56, 0xbb, 0x61, 0xc0, 0xc0, 0x00, 0x00, 0xff, 0xff, 0x55, 0xaa, 0x55, 0xbe, 0x63, 0xa2, 0x63, 0xa2, 0x63, 0xa3, 0x60, 0xa0, 0xe0, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x55, 0xaa, 0x55, 0xff, 0xff, 0xe, 0x1d, 0x3a, 0x75, 0xea, 0xd5, 0xaa, 0x55, 0xaa, 0xff, 0xff, 0x00, 0x00, 0xf0, 0xf8, 0x5c, 0xae, 0x57, 0xab, 0x55, 0xaa, 0x75, 0xba, 0x7d, 0xb6, 0x73, 0xb1, 0x70, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x55, 0xaa, 0x55, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x6, 0x7, 0x6, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x6, 0x7, 0x6, 0x7, 0x7, 0x00, 0x00, 0x00, 0x1, 0x3, 0x6, 0x5, 0x6, 0x7, 0x00, 0x00, 0x7, 0x7, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x7, 0x00, 0x00, 0x7, 0x7, 0x7, 0x6, 0x7, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x6, 0x7, 0x6, 0x7, 0x7, 0x00, 0x00, 0x7, 0x7, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x6, 0x7, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x7, 0x6, 0x7, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x55, 0xaa, 0x55, 0xbf, 0x50, 0xb0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x58, 0xa8, 0x5f, 0xab, 0x5d, 0xaa, 0x44, 0x55, 0xaa, 0x55, 0xae, 0x57, 0xaf, 0x55, 0x2c, 0xd8, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x60, 0xa0, 0x60, 0xbe, 0x6a, 0x96, 0xab, 0x56, 0xae, 0x55, 0xae, 0x41, 0xaa, 0x55};

const unsigned char credit_image[] PROGMEM = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0x20, 0x30, 0x30, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x10, 0x10, 0x30, 0x60, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x1c, 0x6, 0x43, 0xa1, 0x50, 0x00, 0xf8, 0xc, 0x6, 0x23, 0x11, 0xc9, 0xc8, 0xc8, 0x00, 0x00, 0x00, 0xc8, 0xc9, 0xc9, 0x13, 0x26, 0xc, 0xf8, 0x00, 0x3, 0xe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1f, 0xf0, 0x81, 0x2, 0x21, 0xf0, 0x23, 0x66, 0xcc, 0x98, 0xf0, 0x1, 0x1, 0xe1, 0x8, 0xc, 0xe0, 0x1, 0x1, 0xf1, 0x98, 0xcc, 0x46, 0x63, 0x30, 0x18, 0xc, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x3, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x7, 0x4, 0x4, 0x7, 0x4, 0x4, 0x7, 0x4, 0x4, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1, 0x1, 0x79, 0x49, 0x9, 0x9, 0xff, 0x00, 0x00, 0xff, 0x1, 0x1, 0x95, 0x11, 0x11, 0xff, 0x00, 0x00, 0xcf, 0x49, 0x79, 0x1, 0x1, 0x79, 0x49, 0xcf, 0x00, 0x00, 0xff, 0x1, 0x3, 0xe6, 0x44, 0xe6, 0x3, 0x1, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1, 0x1, 0xc1, 0x49, 0x41, 0x41, 0x7f, 0x00, 0x00, 0xff, 0x1, 0x1, 0x95, 0x11, 0x11, 0xff, 0x00, 0x00, 0xff, 0x1, 0x1, 0x79, 0x79, 0x1, 0x1, 0xff, 0x00, 0x00, 0xff, 0x41, 0x41, 0x49, 0x9, 0x9, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x00, 0x00, 0x3, 0x2, 0x2, 0x3, 0x2, 0x2, 0x3, 0x00, 0x00, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x00, 0x00, 0x3, 0x2, 0x2, 0x3, 0x00, 0x3, 0x2, 0x2, 0x3, 0x00, 0x00, 0x00, 0x00, 0x3, 0x2, 0x2, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0x2, 0x2, 0x3, 0x2, 0x2, 0x3, 0x00, 0x00, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x00, 0x00, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const uint8_t game_over_image[] PROGMEM = {0x00, 0x78, 0xce, 0x83, 0x00, 0x00, 0x00, 0x7e, 0xc3, 0x00, 0x00, 0x00, 0xfc, 0xac, 0x54, 0xec, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0x34, 0x2c, 0xf4, 0xac, 0x54, 0xfc, 0x00, 0x00, 0xf, 0x99, 0xe1, 0x00, 0x00, 0xf1, 0x1e, 0x00, 0x87, 0xec, 0x38, 0x00, 0x00, 0x00, 0xc0, 0x73, 0x1e, 0x00, 0x00, 0xf8, 0xf, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x8, 0x8, 0x8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x8, 0x8, 0x8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x8, 0x8, 0x8, 0xc8, 0x48, 0x48, 0x48, 0x48, 0x48, 0x88, 0x8, 0x30, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x8, 0x8, 0x8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0xe, 0xf, 0xe, 0xe0, 0x1c, 0x7, 0x00, 0xff, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0x1c, 0xf0, 0x00, 0x00, 0xe1, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x60, 0x60, 0x60, 0x67, 0x64, 0x64, 0x64, 0x64, 0xe4, 0xe4, 0x4, 0x4, 0x4, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1, 0x1, 0x1, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xe7, 0xc4, 0x4, 0x4, 0x34, 0xd4, 0x13, 0x10, 0x18, 0x7, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x8f, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1f, 0x1c, 0x00, 0x00, 0x3, 0xfe, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xf0, 0x1c, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8f, 0x8f, 0x80, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x80, 0x80, 0x8f, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x80, 0x80, 0x87, 0x84, 0x84, 0x84, 0x87, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x80, 0x80, 0xff, 0xff, 0x7, 0x1c, 0x70, 0xc0, 0x83, 0x8c, 0xb0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x80, 0x80, 0x8f, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xaa, 0x55, 0xff, 0x40, 0xc0, 0x40, 0xc0, 0x40, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc0, 0x40, 0xc0, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x40, 0xc0, 0x40, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x40, 0xc0, 0x40, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x40, 0xc0, 0x40, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x40, 0xc0, 0x40, 0xc0, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc1, 0x41, 0xc0, 0x40, 0xc0, 0x40, 0xc0, 0x7f, 0xaa, 0x55, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0xda, 0x5b, 0x9b, 0xc4, 0xdb, 0x1b, 0xc2, 0xc8, 0xac, 0x6c, 0x10, 0x6c, 0x6c, 0x68, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xb0, 0x34, 0xb6, 0xb6, 0x8, 0xb6, 0xb6, 0xb4, 0xb0, 0x00, 0x00, 0x00, 0x1, 0x00, 0x76, 0x76, 0x76, 0x76, 0x1, 0x76, 0x76, 0x76, 0x76, 0x00, 0x7, 0x7, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x76, 0x76, 0x76, 0x1, 0x76, 0x76, 0x76, 0x76, 0x00, 0x3, 0x00, 0x3, 0x3, 0x3, 0x3, 0x00};

const uint8_t time_item[] PROGMEM = {0x10, 0x28, 0x6c, 0x92, 0x6d, 0xee, 0x54, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1, 0x00, 0x00, 0x00, 0x00};
const uint8_t bomb_item[] PROGMEM = {0xf0, 0x90, 0xa9, 0x4e, 0xa8, 0x90, 0xf0, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00};
const uint8_t tick_item[] PROGMEM = {0x4, 0xe, 0x4, 0x00, 0xe, 0x11, 0x17, 0x15, 0xe};

const uint8_t qr_code[] PROGMEM = {0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xfc, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xf0, 0xf0, 0xf3, 0xf3, 0x3, 0x3, 0xcc, 0xcc, 0xc0, 0xc0, 0xc, 0xc, 0x30, 0x30, 0x30, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0x3f, 0x3f, 0xcf, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc, 0xfc, 0xfc, 0x00, 0x00, 0xc0, 0xc0, 0xcf, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xcf, 0xc0, 0xc0, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xfc, 0xc, 0xc, 0x30, 0x30, 0xf, 0xf, 0xf3, 0xf3, 0xc0, 0xc0, 0xc0, 0x3f, 0x3f, 0xf, 0xf, 0xfc, 0xfc, 0xc, 0xc, 0xff, 0xff, 0xc3, 0xc3, 0xff, 0xff, 0xc0, 0xc0, 0xcf, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xcf, 0xc0, 0xc0, 0x30, 0x30, 0xc0, 0xc0, 0x30, 0x30, 0xff, 0xff, 0x3, 0x3, 0x3c, 0x3c, 0xcc, 0xcc, 0xff, 0xff, 0x3c, 0x3c, 0x30, 0x30, 0xf0, 0xf0, 0xcf, 0xcf, 0xff, 0xff, 0xf3, 0xf3, 0xc3, 0xc3, 0xc3, 0xc0, 0xc0, 0x30, 0x30, 0xcf, 0xcf, 0x00, 0x00, 0xc0, 0xc0, 0x30, 0x30, 0x30, 0x30, 0xc0, 0xc0, 0xc0, 0xc0, 0xc, 0xc, 0xf, 0xf, 0xcf, 0xcf, 0xf0, 0xf0, 0xc0, 0xc0, 0xf3, 0xf3, 0x00, 0x00, 0x70, 0x70, 0x7f, 0x7f, 0xf, 0xf, 0x7c, 0x7c, 0x8c, 0x8c, 0xff, 0xff, 0xc, 0xc, 0xf0, 0xf0, 0x7f, 0x7f, 0x7c, 0x7c, 0x00, 0x00, 0x83, 0x83, 0x3, 0x3, 0x3, 0x83, 0x83, 0x7c, 0x7c, 0xff, 0xff, 0x80, 0x80, 0x3, 0x3, 0x70, 0x70, 0x8f, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0x80, 0x80, 0x99, 0x99, 0x98, 0x98, 0x1e, 0x1e, 0x18, 0x18, 0x66, 0x66, 0x86, 0x86, 0x99, 0x99, 0xe1, 0xe1, 0x60, 0x60, 0xe1, 0xe1, 0x86, 0x86, 0x9e, 0x9e, 0xfe, 0xfe, 0x61, 0x61, 0xf8, 0xf8, 0xf8, 0x1, 0x1, 0x80, 0x80, 0x9f, 0x9f, 0x1, 0x1, 0x86, 0x86, 0x78, 0x78, 0xf9, 0xf9, 0x60, 0x60, 0xe6, 0xe6, 0x1f, 0x1f, 0x9f, 0x9f, 0xe7, 0xe7, 0xe7, 0xe7, 0x81, 0x81, 0x19, 0x19, 0x99, 0x99, 0x98, 0x98, 0x98, 0x98, 0x9e, 0x9e, 0x9f, 0x9f, 0x19, 0x19, 0xff, 0xff, 0x66, 0x66, 0x67, 0x67, 0x67, 0x67, 0x79, 0x79, 0x1, 0x1, 0x98, 0x98, 0x1f, 0x1f, 0x1f, 0x86, 0x86, 0xe7, 0xe7, 0xe7, 0xe7, 0x78, 0x78, 0x7f, 0x7f, 0x00, 0x00, 0xf9, 0xf9, 0x98, 0x98, 0xf9, 0xf9, 0x00, 0x00, 0xe1, 0xe1, 0xe7, 0xe7, 0xf9, 0xf9, 0x87, 0x87, 0x00, 0x00, 0xff, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x1e, 0x1e, 0x6, 0x6, 0x1e, 0x1e, 0x9e, 0x9e, 0xfe, 0xfe, 0x61, 0x61, 0xe0, 0xe0, 0xe0, 0x7, 0x7, 0x81, 0x81, 0x9f, 0x9f, 0x86, 0x86, 0xe0, 0xe0, 0x60, 0x60, 0x81, 0x81, 0xf9, 0xf9, 0x79, 0x79, 0x00, 0x00, 0x61, 0x61, 0xe7, 0xe7, 0x99, 0x99, 0x87, 0x87, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x6, 0x6, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x7, 0x7, 0x7, 0x00, 0x00, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x00, 0x00, 0x7, 0x7, 0x7, 0x7, 0x6, 0x6, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x7, 0x7, 0x1, 0x1};

#endif
