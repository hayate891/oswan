﻿/*
パーソナルデータプログラム
8086のコードでエミュ上で実行される
$Date$
$Rev$
*/

#ifndef WSPDATA_H_
#define WSPDATA_H_

static unsigned int size_pdata = 0xF80;
static unsigned char pdata[] = {
    0xfa, 0x32, 0xc0, 0xe6, 0x14, 0x33, 0xc0, 0x8e, 0xd0, 0x8e, 0xc0, 0x8b, 0xe8, 0xb8, 0x00, 0x0f,
    0x8b, 0xe0, 0x8c, 0xc8, 0x8e, 0xd8, 0xb0, 0xc0, 0xe6, 0x60, 0xb0, 0x20, 0xe6, 0xb0, 0xb0, 0x0c,
    0xe6, 0xa2, 0xb8, 0x24, 0x00, 0xe7, 0xa6, 0x33, 0xff, 0x26, 0xc7, 0x85, 0x94, 0x00, 0xfc, 0x09,
    0x26, 0x8c, 0x8d, 0x96, 0x00, 0xb0, 0x20, 0xe6, 0xb2, 0xbe, 0xf5, 0x0a, 0xbf, 0x00, 0x40, 0xb9,
    0x00, 0x04, 0xfc, 0xa4, 0x4e, 0xa4, 0x4e, 0xa4, 0x4e, 0xa4, 0xe2, 0xf7, 0xb9, 0x60, 0x00, 0xf3,
    0xa4, 0xbf, 0x00, 0x40, 0xb8, 0x00, 0x00, 0x26, 0x89, 0x85, 0x00, 0x04, 0x26, 0x89, 0x85, 0x04,
    0x04, 0x26, 0x89, 0x85, 0x08, 0x04, 0x26, 0x89, 0x85, 0x0c, 0x04, 0x26, 0x89, 0x85, 0x10, 0x04,
    0x26, 0x89, 0x85, 0x14, 0x04, 0x26, 0x89, 0x85, 0x18, 0x04, 0x26, 0x89, 0x85, 0x1c, 0x04, 0x26,
    0x88, 0x85, 0xe0, 0x03, 0x26, 0x88, 0x85, 0xe4, 0x03, 0x26, 0x88, 0x85, 0xe8, 0x03, 0x26, 0x88,
    0x85, 0xec, 0x03, 0x26, 0x88, 0x85, 0xf0, 0x03, 0x26, 0x88, 0x85, 0xf4, 0x03, 0x26, 0x88, 0x85,
    0xf8, 0x03, 0x26, 0x88, 0x85, 0xfc, 0x03, 0xbf, 0x00, 0xfe, 0xb8, 0x00, 0x00, 0xb9, 0x00, 0x01,
    0x26, 0x89, 0x05, 0x47, 0x47, 0xe2, 0xf9, 0xbf, 0x00, 0xfe, 0xb8, 0x00, 0x0f, 0x26, 0x89, 0x45,
    0x1c, 0xb8, 0xff, 0x0f, 0x26, 0x89, 0x45, 0x1e, 0xb8, 0x88, 0x08, 0x26, 0x89, 0x45, 0x3e, 0xb8,
    0x55, 0x05, 0x26, 0x89, 0x45, 0x46, 0xb8, 0xdd, 0x0d, 0x26, 0x89, 0x45, 0x4e, 0xb8, 0x00, 0x00,
    0x26, 0x89, 0x85, 0x9e, 0x00, 0xb0, 0x76, 0xe6, 0x07, 0x32, 0xc0, 0xe6, 0x10, 0xe6, 0x11, 0xe6,
    0x12, 0xe6, 0x13, 0xe8, 0x40, 0x04, 0xe8, 0x4d, 0x04, 0xe8, 0x9c, 0x07, 0xe8, 0xef, 0x07, 0xb0,
    0x4f, 0xe6, 0x01, 0xb0, 0x03, 0xe6, 0x00, 0xe6, 0x14, 0xbf, 0x41, 0x0f, 0xb4, 0x00, 0x26, 0x88,
    0x25, 0xbf, 0x40, 0x0f, 0xb4, 0x0b, 0x26, 0x88, 0x25, 0xbf, 0x42, 0x0f, 0x32, 0xe4, 0x26, 0x88,
    0x25, 0xe8, 0x39, 0x04, 0xb9, 0x01, 0x01, 0xe8, 0x2e, 0x06, 0xb9, 0x00, 0x00, 0xe8, 0x8e, 0x04,
    0xfb, 0xe8, 0xeb, 0x03, 0xa8, 0x40, 0x74, 0x19, 0xbf, 0x41, 0x0f, 0x26, 0x8a, 0x25, 0xfe, 0xc4,
    0x80, 0xfc, 0x08, 0x72, 0x04, 0xfe, 0xcc, 0xeb, 0xe8, 0x26, 0x88, 0x25, 0xe8, 0x25, 0x06, 0xeb,
    0xe0, 0xa8, 0x10, 0x74, 0x14, 0xbf, 0x41, 0x0f, 0x26, 0x8a, 0x25, 0x22, 0xe4, 0x74, 0xd2, 0xfe,
    0xcc, 0x26, 0x88, 0x25, 0xe8, 0x0d, 0x06, 0xeb, 0xc8, 0xa8, 0x20, 0x75, 0x03, 0xe9, 0x32, 0x01,
    0xbe, 0x41, 0x0f, 0x26, 0x8a, 0x04, 0x3c, 0x01, 0x75, 0x29, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04,
    0x8a, 0xe0, 0xfe, 0xc0, 0x3c, 0x1b, 0x72, 0x02, 0xb0, 0x0b, 0x26, 0x88, 0x04, 0xb1, 0x00, 0xbe,
    0x9b, 0x0a, 0xb7, 0x05, 0x8a, 0xdc, 0xe8, 0xd5, 0x06, 0xbe, 0x89, 0x0a, 0x8a, 0xd8, 0xe8, 0xcd,
    0x06, 0xeb, 0x8e, 0x3c, 0x02, 0x75, 0x2a, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04, 0x8a, 0xe0, 0xfe,
    0xc0, 0x3c, 0x0f, 0x72, 0x02, 0xb0, 0x0b, 0x26, 0x88, 0x04, 0xb1, 0x00, 0xbe, 0x9b, 0x0a, 0xb7,
    0x07, 0x8a, 0xdc, 0xe8, 0xa8, 0x06, 0xbe, 0x89, 0x0a, 0x8a, 0xd8, 0xe8, 0xa0, 0x06, 0xe9, 0x60,
    0xff, 0x3c, 0x03, 0x75, 0x46, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x12, 0x8a, 0xf8, 0xc0, 0xe8,
    0x04, 0xb3, 0x0a, 0xf6, 0xe3, 0x80, 0xe7, 0x0f, 0x02, 0xc7, 0xfe, 0xc0, 0x3c, 0x0d, 0x75, 0x02,
    0xb0, 0x01, 0xe8, 0xe9, 0x02, 0x26, 0x88, 0x44, 0x12, 0xbf, 0x38, 0x0f, 0x8a, 0xe0, 0xc0, 0xec,
    0x04, 0x80, 0xc4, 0x30, 0x26, 0x88, 0x25, 0x47, 0x24, 0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47,
    0xb0, 0x00, 0xb9, 0x00, 0x00, 0xe8, 0x2a, 0x04, 0xe9, 0x16, 0xff, 0x3c, 0x04, 0x75, 0x46, 0xbe,
    0x00, 0x0f, 0x26, 0x8a, 0x44, 0x13, 0x8a, 0xf8, 0xc0, 0xe8, 0x04, 0xb3, 0x0a, 0xf6, 0xe3, 0x80,
    0xe7, 0x0f, 0x02, 0xc7, 0xfe, 0xc0, 0x3c, 0x20, 0x75, 0x02, 0xb0, 0x01, 0xe8, 0x9f, 0x02, 0x26,
    0x88, 0x44, 0x13, 0xbf, 0x3c, 0x0f, 0x8a, 0xe0, 0xc0, 0xec, 0x04, 0x80, 0xc4, 0x30, 0x26, 0x88,
    0x25, 0x47, 0x24, 0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0xb9, 0x00, 0x00, 0xe8,
    0x12, 0x04, 0xe9, 0xcc, 0xfe, 0x3c, 0x05, 0x75, 0x19, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x14,
    0xfe, 0xc0, 0x3c, 0x03, 0x75, 0x02, 0xb0, 0x00, 0x26, 0x88, 0x44, 0x14, 0xe8, 0x27, 0x04, 0xe9,
    0xaf, 0xfe, 0x3c, 0x06, 0x74, 0x03, 0xe9, 0xa8, 0xfe, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x15,
    0xfe, 0xc0, 0x3c, 0x05, 0x75, 0x02, 0xb0, 0x00, 0x26, 0x88, 0x44, 0x15, 0xe8, 0x48, 0x04, 0xe9,
    0x8f, 0xfe, 0xa8, 0x80, 0x75, 0x03, 0xe9, 0x33, 0x01, 0xbe, 0x41, 0x0f, 0x26, 0x8a, 0x04, 0x3c,
    0x01, 0x75, 0x2a, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04, 0x8a, 0xe0, 0xfe, 0xc8, 0x3c, 0x0a, 0x75,
    0x02, 0xb0, 0x1a, 0x26, 0x88, 0x04, 0xb1, 0x00, 0xbe, 0x9b, 0x0a, 0xb7, 0x05, 0x8a, 0xdc, 0xe8,
    0x9c, 0x05, 0xbe, 0x89, 0x0a, 0x8a, 0xd8, 0xe8, 0x94, 0x05, 0xe9, 0x54, 0xfe, 0x3c, 0x02, 0x75,
    0x2a, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04, 0x8a, 0xe0, 0xfe, 0xc8, 0x3c, 0x0a, 0x75, 0x02, 0xb0,
    0x0e, 0x26, 0x88, 0x04, 0xb1, 0x00, 0xbe, 0x9b, 0x0a, 0xb7, 0x07, 0x8a, 0xdc, 0xe8, 0x6e, 0x05,
    0xbe, 0x89, 0x0a, 0x8a, 0xd8, 0xe8, 0x66, 0x05, 0xe9, 0x26, 0xfe, 0x3c, 0x03, 0x75, 0x46, 0xbe,
    0x00, 0x0f, 0x26, 0x8a, 0x44, 0x12, 0x8a, 0xf8, 0xc0, 0xe8, 0x04, 0xb3, 0x0a, 0xf6, 0xe3, 0x80,
    0xe7, 0x0f, 0x02, 0xc7, 0x3c, 0x01, 0x77, 0x02, 0xb0, 0x0d, 0xfe, 0xc8, 0xe8, 0xaf, 0x01, 0x26,
    0x88, 0x44, 0x12, 0xbf, 0x38, 0x0f, 0x8a, 0xe0, 0xc0, 0xec, 0x04, 0x80, 0xc4, 0x30, 0x26, 0x88,
    0x25, 0x47, 0x24, 0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0xb9, 0x00, 0x00, 0xe8,
    0xf0, 0x02, 0xe9, 0xdc, 0xfd, 0x3c, 0x04, 0x75, 0x46, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x13,
    0x8a, 0xf8, 0xc0, 0xe8, 0x04, 0xb3, 0x0a, 0xf6, 0xe3, 0x80, 0xe7, 0x0f, 0x02, 0xc7, 0x3c, 0x01,
    0x77, 0x02, 0xb0, 0x20, 0xfe, 0xc8, 0xe8, 0x65, 0x01, 0x26, 0x88, 0x44, 0x13, 0xbf, 0x3c, 0x0f,
    0x8a, 0xe0, 0xc0, 0xec, 0x04, 0x80, 0xc4, 0x30, 0x26, 0x88, 0x25, 0x47, 0x24, 0x0f, 0x04, 0x30,
    0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0xb9, 0x00, 0x00, 0xe8, 0xd8, 0x02, 0xe9, 0x92, 0xfd, 0x3c,
    0x05, 0x75, 0x19, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x14, 0x22, 0xc0, 0x75, 0x02, 0xb0, 0x03,
    0xfe, 0xc8, 0x26, 0x88, 0x44, 0x14, 0xe8, 0xed, 0x02, 0xe9, 0x75, 0xfd, 0x3c, 0x06, 0x74, 0x03,
    0xe9, 0x6e, 0xfd, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x15, 0x22, 0xc0, 0x75, 0x02, 0xb0, 0x05,
    0xfe, 0xc8, 0x26, 0x88, 0x44, 0x15, 0xe8, 0x0e, 0x03, 0xe9, 0x55, 0xfd, 0xa8, 0x04, 0x75, 0x03,
    0xe9, 0x81, 0x00, 0xbe, 0x41, 0x0f, 0x26, 0x8a, 0x04, 0x3c, 0x01, 0x75, 0x40, 0xbe, 0x40, 0x0f,
    0x26, 0x8a, 0x04, 0x2c, 0x0b, 0xbe, 0x20, 0x0f, 0x32, 0xe4, 0x03, 0xf0, 0x26, 0x8a, 0x04, 0xbb,
    0xc8, 0x0a, 0xb4, 0x00, 0x3a, 0x07, 0x74, 0x08, 0x43, 0xfe, 0xc4, 0x80, 0xfc, 0x2d, 0x72, 0xf4,
    0xfe, 0xc4, 0x80, 0xfc, 0x2d, 0x72, 0x02, 0xb4, 0x00, 0xbf, 0xc8, 0x0a, 0x8a, 0xc4, 0x32, 0xe4,
    0x03, 0xf8, 0x8a, 0x05, 0x26, 0x88, 0x04, 0xe8, 0xb4, 0x01, 0xe9, 0x04, 0xfd, 0x3c, 0x02, 0x75,
    0x23, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04, 0x2c, 0x0b, 0xbe, 0x32, 0x0f, 0x32, 0xe4, 0x03, 0xf0,
    0x26, 0x8a, 0x04, 0x3c, 0x39, 0x72, 0x02, 0xb0, 0x2f, 0xfe, 0xc0, 0x26, 0x88, 0x04, 0xe8, 0xbf,
    0x01, 0xe9, 0xdd, 0xfc, 0x3c, 0x07, 0x74, 0x03, 0xe9, 0xd6, 0xfc, 0xe8, 0x34, 0x05, 0xe8, 0x59,
    0x04, 0xe9, 0xcd, 0xfc, 0xa8, 0x08, 0x75, 0x03, 0xe9, 0xc6, 0xfc, 0xbe, 0x41, 0x0f, 0x26, 0x8a,
    0x04, 0x3c, 0x01, 0x75, 0x3f, 0xbe, 0x40, 0x0f, 0x26, 0x8a, 0x04, 0x2c, 0x0b, 0xbe, 0x20, 0x0f,
    0x32, 0xe4, 0x03, 0xf0, 0x26, 0x8a, 0x04, 0xbb, 0xc8, 0x0a, 0xb4, 0x00, 0x3a, 0x07, 0x74, 0x08,
    0x43, 0xfe, 0xc4, 0x80, 0xfc, 0x2d, 0x72, 0xf4, 0x22, 0xe4, 0x75, 0x02, 0xb4, 0x2d, 0xfe, 0xcc,
    0xbf, 0xc8, 0x0a, 0x8a, 0xc4, 0x32, 0xe4, 0x03, 0xf8, 0x8a, 0x05, 0x26, 0x88, 0x04, 0xe8, 0x2d,
    0x01, 0xe9, 0x7d, 0xfc, 0x3c, 0x02, 0x74, 0x03, 0xe9, 0x76, 0xfc, 0xbe, 0x40, 0x0f, 0x26, 0x8a,
    0x04, 0x2c, 0x0b, 0xbe, 0x32, 0x0f, 0x32, 0xe4, 0x03, 0xf0, 0x26, 0x8a, 0x04, 0x3c, 0x30, 0x77,
    0x02, 0xb0, 0x3a, 0xfe, 0xc8, 0x26, 0x88, 0x04, 0xe8, 0x35, 0x01, 0xe9, 0x53, 0xfc, 0xb4, 0x00,
    0x3c, 0x0a, 0x72, 0x07, 0x2c, 0x0a, 0x80, 0xc4, 0x10, 0xeb, 0xf5, 0x0a, 0xc4, 0xc3, 0x53, 0xb8,
    0x10, 0x00, 0xe6, 0xb5, 0x90, 0x90, 0x90, 0xe4, 0xb5, 0x24, 0x0f, 0x8b, 0xd8, 0xc1, 0xe3, 0x04,
    0xb0, 0x20, 0xe6, 0xb5, 0x90, 0x90, 0x90, 0xe4, 0xb5, 0x24, 0x0f, 0x0b, 0xd8, 0xc1, 0xe3, 0x04,
    0xb0, 0x40, 0xe6, 0xb5, 0x90, 0x90, 0x90, 0xe4, 0xb5, 0x24, 0x0f, 0x0b, 0xc3, 0x5b, 0xc3, 0x57,
    0x53, 0xbf, 0x44, 0x0f, 0x26, 0x8b, 0x05, 0x8b, 0xd8, 0xe8, 0xc2, 0xff, 0x26, 0x89, 0x05, 0x33,
    0xd8, 0x23, 0xc3, 0x5b, 0x5f, 0xc3, 0xbf, 0x00, 0x30, 0x33, 0xc0, 0xb9, 0x00, 0x04, 0x26, 0x89,
    0x05, 0x47, 0x47, 0xe2, 0xf9, 0xc3, 0xbf, 0x00, 0x38, 0xb0, 0x0c, 0xd0, 0xe0, 0x32, 0xe4, 0xb9,
    0x00, 0x04, 0x26, 0x88, 0x25, 0x47, 0x26, 0x88, 0x05, 0x47, 0xe2, 0xf6, 0xc3, 0xbf, 0x00, 0x30,
    0xbb, 0x40, 0x00, 0x03, 0xfb, 0x03, 0xfb, 0xb8, 0x82, 0x04, 0x26, 0x89, 0x05, 0x47, 0x47, 0xb9,
    0x1a, 0x00, 0xb8, 0x81, 0x04, 0x26, 0x89, 0x05, 0x47, 0x47, 0xe2, 0xf9, 0xb8, 0x82, 0x44, 0x26,
    0x89, 0x05, 0xbb, 0x0a, 0x00, 0x03, 0xfb, 0xb9, 0x0e, 0x00, 0xb8, 0x80, 0x04, 0x26, 0x89, 0x05,
    0xbb, 0x36, 0x00, 0x03, 0xfb, 0xb8, 0x80, 0x44, 0x26, 0x89, 0x05, 0xbb, 0x0a, 0x00, 0x03, 0xfb,
    0xe2, 0xe8, 0xb8, 0x82, 0x84, 0x26, 0x89, 0x05, 0x47, 0x47, 0xb9, 0x1a, 0x00, 0xb8, 0x81, 0x84,
    0x26, 0x89, 0x05, 0x47, 0x47, 0xe2, 0xf9, 0xb8, 0x82, 0xc4, 0x26, 0x89, 0x05, 0xc3, 0x51, 0xbe,
    0x1e, 0x0a, 0xb7, 0x01, 0xb3, 0x02, 0xb1, 0x00, 0xe8, 0x4a, 0x02, 0x22, 0xed, 0x74, 0x05, 0xbe,
    0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb3, 0x01, 0xe8, 0x39, 0x02, 0x59, 0xc3, 0xbe, 0x2c,
    0x0a, 0xb7, 0x04, 0xb3, 0x06, 0xe8, 0x2d, 0x02, 0xbe, 0x31, 0x0a, 0xb7, 0x05, 0xb3, 0x0b, 0xe8,
    0x23, 0x02, 0xbe, 0x20, 0x0f, 0xb7, 0x04, 0xb3, 0x0b, 0xe8, 0x43, 0x02, 0x22, 0xed, 0x74, 0x05,
    0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x04, 0xb3, 0x0a, 0xe8, 0x06, 0x02, 0xc3,
    0xbe, 0x42, 0x0a, 0xb7, 0x06, 0xb3, 0x02, 0xe8, 0xfb, 0x01, 0xbe, 0x4b, 0x0a, 0xb7, 0x07, 0xb3,
    0x06, 0xe8, 0xf1, 0x01, 0xbe, 0x32, 0x0f, 0xb7, 0x07, 0xb3, 0x0b, 0xe8, 0x11, 0x02, 0x22, 0xed,
    0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x07, 0xb3, 0x0a, 0xe8, 0xd4,
    0x01, 0xc3, 0xbe, 0x42, 0x0a, 0xb7, 0x06, 0xb3, 0x02, 0xe8, 0xc9, 0x01, 0xbe, 0x50, 0x0a, 0xb7,
    0x08, 0xb3, 0x05, 0xe8, 0xbf, 0x01, 0xbe, 0x38, 0x0f, 0xb7, 0x08, 0xb3, 0x0b, 0xe8, 0xdf, 0x01,
    0x22, 0xed, 0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x08, 0xb3, 0x0a,
    0xe8, 0xa2, 0x01, 0xc3, 0xbe, 0x42, 0x0a, 0xb7, 0x06, 0xb3, 0x02, 0xe8, 0x97, 0x01, 0xbe, 0x56,
    0x0a, 0xb7, 0x09, 0xb3, 0x07, 0xe8, 0x8d, 0x01, 0xbe, 0x3c, 0x0f, 0xb7, 0x09, 0xb3, 0x0b, 0xe8,
    0xad, 0x01, 0x22, 0xed, 0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x09,
    0xb3, 0x0a, 0xe8, 0x70, 0x01, 0xc3, 0xbe, 0x5a, 0x0a, 0xb7, 0x0b, 0xb3, 0x07, 0xe8, 0x65, 0x01,
    0x22, 0xed, 0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x0b, 0xb3, 0x0a,
    0xe8, 0x52, 0x01, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x14, 0x3c, 0x01, 0x75, 0x05, 0xbe, 0x5e,
    0x0a, 0xeb, 0x0c, 0x3c, 0x02, 0x75, 0x05, 0xbe, 0x65, 0x0a, 0xeb, 0x03, 0xbe, 0x94, 0x0a, 0xb7,
    0x0b, 0xb3, 0x0b, 0xe8, 0x2f, 0x01, 0xc3, 0xbe, 0x6c, 0x0a, 0xb7, 0x0d, 0xb3, 0x01, 0xe8, 0x24,
    0x01, 0x22, 0xed, 0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a, 0xb7, 0x0d, 0xb3,
    0x0a, 0xe8, 0x11, 0x01, 0xbe, 0x00, 0x0f, 0x26, 0x8a, 0x44, 0x15, 0x3c, 0x01, 0x75, 0x05, 0xbe,
    0x76, 0x0a, 0xeb, 0x1e, 0x3c, 0x02, 0x75, 0x05, 0xbe, 0x79, 0x0a, 0xeb, 0x15, 0x3c, 0x03, 0x75,
    0x05, 0xbe, 0x7c, 0x0a, 0xeb, 0x0c, 0x3c, 0x04, 0x75, 0x05, 0xbe, 0x7f, 0x0a, 0xeb, 0x03, 0xbe,
    0x94, 0x0a, 0xb7, 0x0d, 0xb3, 0x0b, 0xe8, 0xdc, 0x00, 0xc3, 0xbe, 0x82, 0x0a, 0xb7, 0x0f, 0xb3,
    0x0d, 0xe8, 0xd1, 0x00, 0x22, 0xed, 0x74, 0x05, 0xbe, 0x89, 0x0a, 0xeb, 0x03, 0xbe, 0x87, 0x0a,
    0xb7, 0x0f, 0xb3, 0x0c, 0xe8, 0xbe, 0x00, 0xc3, 0x51, 0xe8, 0xea, 0xfd, 0x59, 0xe8, 0x5e, 0xfe,
    0xe8, 0x7b, 0xfe, 0xe8, 0xaa, 0xfe, 0xe8, 0xd9, 0xfe, 0xe8, 0x08, 0xff, 0xe8, 0x37, 0xff, 0xe8,
    0x75, 0xff, 0xeb, 0xc6, 0xbf, 0x40, 0x0f, 0xb4, 0x0b, 0x26, 0x88, 0x25, 0xb9, 0x01, 0x01, 0xe8,
    0xd6, 0xff, 0xb9, 0x00, 0x00, 0xbf, 0x41, 0x0f, 0x26, 0x8a, 0x25, 0x80, 0xfc, 0x01, 0x75, 0x0d,
    0xbe, 0x89, 0x0a, 0xb7, 0x05, 0xb3, 0x0b, 0xe8, 0xd4, 0x00, 0xe9, 0x41, 0xfe, 0x80, 0xfc, 0x02,
    0x75, 0x0d, 0xbe, 0x89, 0x0a, 0xb7, 0x07, 0xb3, 0x0b, 0xe8, 0xc2, 0x00, 0xe9, 0x61, 0xfe, 0x80,
    0xfc, 0x03, 0x75, 0x0d, 0xbe, 0x8b, 0x0a, 0xb7, 0x08, 0xb3, 0x0b, 0xe8, 0xb0, 0x00, 0xe9, 0x81,
    0xfe, 0x80, 0xfc, 0x04, 0x75, 0x0d, 0xbe, 0x8b, 0x0a, 0xb7, 0x09, 0xb3, 0x0b, 0xe8, 0x9e, 0x00,
    0xe9, 0xa1, 0xfe, 0x80, 0xfc, 0x05, 0x75, 0x0d, 0xbe, 0x8b, 0x0a, 0xb7, 0x0b, 0xb3, 0x0b, 0xe8,
    0x8c, 0x00, 0xe9, 0xc1, 0xfe, 0x80, 0xfc, 0x06, 0x75, 0x0d, 0xbe, 0x8b, 0x0a, 0xb7, 0x0d, 0xb3,
    0x0b, 0xe8, 0x7a, 0x00, 0xe9, 0xf0, 0xfe, 0x80, 0xfc, 0x07, 0x74, 0x03, 0xe9, 0xbf, 0xfd, 0xb9,
    0x00, 0x01, 0xe8, 0x53, 0xff, 0xbe, 0x8b, 0x0a, 0xb7, 0x0f, 0xb3, 0x0d, 0xe8, 0x5f, 0x00, 0xb9,
    0x00, 0x00, 0xe9, 0x25, 0xff, 0x57, 0x51, 0x53, 0x50, 0xbf, 0x00, 0x30, 0xd0, 0xe1, 0xfe, 0xc7,
    0xeb, 0x03, 0x83, 0xc7, 0x40, 0xfe, 0xcf, 0x75, 0xf9, 0x03, 0xfb, 0x03, 0xfb, 0xeb, 0x05, 0xa4,
    0x26, 0x88, 0x0d, 0x47, 0x8a, 0x04, 0x0a, 0xc0, 0x75, 0xf5, 0x58, 0x5b, 0x59, 0x5f, 0xc3, 0x57,
    0x51, 0x53, 0x50, 0xbf, 0x00, 0x30, 0xd0, 0xe1, 0xfe, 0xc7, 0xeb, 0x03, 0x83, 0xc7, 0x40, 0xfe,
    0xcf, 0x75, 0xf9, 0x03, 0xfb, 0x03, 0xfb, 0xeb, 0x09, 0x26, 0x88, 0x05, 0x46, 0x47, 0x26, 0x88,
    0x0d, 0x47, 0x26, 0x8a, 0x04, 0x0a, 0xc0, 0x75, 0xf0, 0x58, 0x5b, 0x59, 0x5f, 0xc3, 0x57, 0x51,
    0x53, 0x50, 0xbf, 0x00, 0x38, 0xd0, 0xe1, 0xfe, 0xc7, 0xeb, 0x03, 0x83, 0xc7, 0x40, 0xfe, 0xcf,
    0x75, 0xf9, 0x03, 0xfb, 0x03, 0xfb, 0xeb, 0x05, 0xa4, 0x26, 0x88, 0x0d, 0x47, 0x8a, 0x04, 0x0a,
    0xc0, 0x75, 0xf5, 0x58, 0x5b, 0x59, 0x5f, 0xc3, 0xbf, 0x00, 0x0f, 0xbb, 0xb0, 0x01, 0xb9, 0x0b,
    0x00, 0x8b, 0xc3, 0xe7, 0xbc, 0xb0, 0x10, 0xe6, 0xbe, 0xe4, 0xbe, 0x24, 0x01, 0x74, 0xfa, 0xe5,
    0xba, 0x26, 0x89, 0x05, 0x47, 0x47, 0x43, 0xe2, 0xe8, 0xc3, 0xbe, 0x00, 0x0f, 0xb8, 0x30, 0x01,
    0xe7, 0xbc, 0xb0, 0x80, 0xe6, 0xbe, 0xbb, 0x70, 0x01, 0xb9, 0x0b, 0x00, 0x26, 0x8b, 0x04, 0xe7,
    0xba, 0x8b, 0xc3, 0xe7, 0xbc, 0xb0, 0x20, 0xe6, 0xbe, 0xe4, 0xbe, 0x24, 0x02, 0x74, 0xfa, 0x46,
    0x46, 0x43, 0xe2, 0xe8, 0xb8, 0x00, 0x01, 0xe7, 0xbc, 0xb0, 0x40, 0xe6, 0xbe, 0xc3, 0x56, 0x57,
    0x50, 0x53, 0x51, 0xbe, 0x00, 0x0f, 0xbf, 0x20, 0x0f, 0xb9, 0x10, 0x00, 0xb4, 0x00, 0xbb, 0x9d,
    0x0a, 0x26, 0x8a, 0x04, 0x03, 0xd8, 0x8a, 0x07, 0x26, 0x88, 0x05, 0x46, 0x47, 0xe2, 0xef, 0xb0,
    0x00, 0x26, 0x88, 0x05, 0xbf, 0x32, 0x0f, 0x26, 0x8b, 0x04, 0x46, 0x46, 0x8b, 0xd8, 0x8a, 0xc3,
    0xc0, 0xe8, 0x04, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0x8a, 0xc3, 0x24, 0x0f, 0x04, 0x30, 0x26,
    0x88, 0x05, 0x47, 0x8a, 0xc7, 0xc0, 0xe8, 0x04, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0x8a, 0xc7,
    0x24, 0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0x26, 0x88, 0x05, 0xbf, 0x38, 0x0f,
    0x26, 0x8a, 0x04, 0x46, 0x8a, 0xe0, 0xc0, 0xec, 0x04, 0x80, 0xc4, 0x30, 0x26, 0x88, 0x25, 0x47,
    0x24, 0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0x26, 0x88, 0x05, 0xbf, 0x3c, 0x0f,
    0x26, 0x8a, 0x04, 0x8a, 0xe0, 0xc0, 0xec, 0x04, 0x80, 0xc4, 0x30, 0x26, 0x88, 0x25, 0x47, 0x24,
    0x0f, 0x04, 0x30, 0x26, 0x88, 0x05, 0x47, 0xb0, 0x00, 0x26, 0x88, 0x05, 0x59, 0x5b, 0x58, 0x5f,
    0x5e, 0xc3, 0x56, 0x57, 0x50, 0x53, 0x51, 0xbe, 0x20, 0x0f, 0xbf, 0x00, 0x0f, 0xb9, 0x10, 0x00,
    0xbb, 0x9d, 0x0a, 0x26, 0x8a, 0x04, 0x3c, 0x01, 0x75, 0x02, 0xb0, 0x20, 0x3c, 0x02, 0x75, 0x02,
    0xb0, 0x20, 0xb4, 0x00, 0x3a, 0x07, 0x74, 0x08, 0x43, 0xfe, 0xc4, 0x80, 0xfc, 0x2c, 0x72, 0xf4,
    0x26, 0x88, 0x25, 0x46, 0x47, 0xe2, 0xd9, 0xbe, 0x32, 0x0f, 0x26, 0x8a, 0x04, 0x2c, 0x30, 0xc0,
    0xe0, 0x04, 0x8a, 0xd8, 0x46, 0x26, 0x8a, 0x04, 0x2c, 0x30, 0x0a, 0xc3, 0x26, 0x88, 0x05, 0x46,
    0x47, 0x26, 0x8a, 0x04, 0x2c, 0x30, 0xc0, 0xe0, 0x04, 0x8a, 0xd8, 0x46, 0x26, 0x8a, 0x04, 0x2c,
    0x30, 0x0a, 0xc3, 0x26, 0x88, 0x05, 0x59, 0x5b, 0x58, 0x5f, 0x5e, 0xc3, 0xfa, 0x56, 0x50, 0xbe,
    0x42, 0x0f, 0x26, 0x8a, 0x04, 0x34, 0x01, 0x26, 0x88, 0x04, 0x22, 0xc0, 0x74, 0x04, 0xb0, 0x01,
    0xeb, 0x02, 0xb0, 0x03, 0xe6, 0x00, 0xb0, 0x20, 0xe6, 0xb6, 0x58, 0x5e, 0xfb, 0xcf, 0x50, 0x45,
    0x52, 0x53, 0x4f, 0x4e, 0x41, 0x4c, 0x20, 0x44, 0x41, 0x54, 0x41, 0x00, 0x4e, 0x41, 0x4d, 0x45,
    0x00, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x1e, 0x00, 0x42, 0x49, 0x52, 0x54, 0x48, 0x44, 0x41, 0x59, 0x00, 0x59, 0x45, 0x41, 0x52, 0x00,
    0x4d, 0x4f, 0x4e, 0x54, 0x48, 0x00, 0x44, 0x41, 0x59, 0x00, 0x53, 0x45, 0x58, 0x00, 0x4d, 0x41,
    0x4c, 0x45, 0x20, 0x20, 0x00, 0x46, 0x45, 0x4d, 0x41, 0x4c, 0x45, 0x00, 0x42, 0x4c, 0x4f, 0x4f,
    0x44, 0x54, 0x59, 0x50, 0x45, 0x00, 0x41, 0x20, 0x00, 0x42, 0x20, 0x00, 0x4f, 0x20, 0x00, 0x41,
    0x42, 0x00, 0x4f, 0x4b, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x20, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x00, 0x3f, 0x00, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x01, 0x00, 0x20, 0x30, 0x31,// +13 code=>font table
    0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48,
    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
    0x59, 0x5a, 0x1c, 0x1d, 0x2b, 0x2d, 0x3f, 0x2e, 0x20, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,//
    0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
    0x58, 0x59, 0x5a, 0x01, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x02, 0x1c,
    0x1d, 0x2b, 0x2d, 0x3f, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// +5=font
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xee, 0xfe, 0xfe, 0x7c, 0x38, 0x10, 0x00, 0x30, 0x38, 0x2c,
    0x24, 0x24, 0xe0, 0xc0, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x1c,
    0x1e, 0x1c, 0x18, 0x10, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x08, 0x08,
    0x08, 0x08, 0x00, 0x08, 0x00, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x14, 0x7f,
    0x14, 0x7f, 0x14, 0x14, 0x00, 0x08, 0x1e, 0x28, 0x1c, 0x0a, 0x3c, 0x08, 0x00, 0x00, 0x32, 0x34,
    0x08, 0x16, 0x26, 0x00, 0x00, 0x18, 0x28, 0x10, 0x28, 0x46, 0x44, 0x3a, 0x00, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x04, 0x00, 0x10, 0x08, 0x04,
    0x04, 0x04, 0x08, 0x10, 0x00, 0x08, 0x49, 0x2a, 0x1c, 0x2a, 0x49, 0x08, 0x00, 0x10, 0x10, 0x10,
    0xfe, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x04, 0x08, 0x00, 0x00, 0x00,
    0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x01, 0x02, 0x04,
    0x08, 0x10, 0x20, 0x40, 0x00, 0x7c, 0xc6, 0xce, 0xd6, 0xe6, 0xc6, 0x7c, 0x00, 0x78, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x00, 0xfc, 0x06, 0x06, 0x7c, 0xc0, 0xc0, 0xfe, 0x00, 0xfc, 0x06, 0x06,
    0x7c, 0x06, 0x06, 0xfc, 0x00, 0x3c, 0x6c, 0xcc, 0xcc, 0xcc, 0xfe, 0x0c, 0x00, 0xfe, 0xc0, 0xc0,
    0xfc, 0x06, 0x06, 0xfc, 0x00, 0x7c, 0xc0, 0xc0, 0xfc, 0xc6, 0xc6, 0x7c, 0x00, 0xfe, 0xc3, 0x06,
    0x0c, 0x18, 0x18, 0x18, 0x00, 0x7c, 0xc6, 0xc6, 0x7c, 0xc6, 0xc6, 0x7c, 0x00, 0x7c, 0xc6, 0xc6,
    0x7e, 0x06, 0x06, 0x7c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x0c,
    0x00, 0x0c, 0x0c, 0x04, 0x08, 0x04, 0x08, 0x10, 0x20, 0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0x7f,
    0x00, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 0x08, 0x10, 0x20, 0x00, 0x3c, 0x66, 0x66,
    0x0c, 0x18, 0x00, 0x18, 0x00, 0x1c, 0x22, 0x2e, 0x2a, 0x2e, 0x20, 0x1c, 0x00, 0x38, 0x6c, 0xc6,
    0xc6, 0xfe, 0xc6, 0xc6, 0x00, 0xfc, 0xc6, 0xc6, 0xfc, 0xc6, 0xc6, 0xfc, 0x00, 0x7c, 0xc6, 0xc0,
    0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0xf8, 0xcc, 0xc6, 0xc6, 0xc6, 0xcc, 0xf8, 0x00, 0xfe, 0xc0, 0xc0,
    0xfc, 0xc0, 0xc0, 0xfe, 0x00, 0xfe, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0x00, 0x7e, 0xc0, 0xc0,
    0xce, 0xc6, 0xc6, 0x7c, 0x00, 0xc6, 0xc6, 0xc6, 0xfe, 0xc6, 0xc6, 0xc6, 0x00, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x3c, 0x00, 0x0e, 0x06, 0x06, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0xc6, 0xcc, 0xd8,
    0xf0, 0xd8, 0xcc, 0xc6, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0x00, 0xc6, 0xee, 0xfe,
    0xd6, 0xc6, 0xc6, 0xc6, 0x00, 0xc6, 0xe6, 0xf6, 0xde, 0xce, 0xc6, 0xc6, 0x00, 0x7c, 0xc6, 0xc6,
    0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0xfc, 0xc6, 0xc6, 0xfc, 0xc0, 0xc0, 0xc0, 0x00, 0x7c, 0xc6, 0xc6,
    0xd6, 0xde, 0xce, 0x7c, 0x00, 0xfc, 0xc6, 0xc6, 0xfc, 0xd8, 0xcc, 0xc6, 0x00, 0x7c, 0xc6, 0xc0,
    0x7c, 0x06, 0xc6, 0x7c, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0xc6, 0xc6, 0xc6, 0x6c, 0x6c, 0x38, 0x10, 0x00, 0xc6, 0xd6, 0xd6,
    0xd6, 0xfe, 0x6c, 0x44, 0x00, 0xc6, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0xc6, 0x00, 0x66, 0x66, 0x66,
    0x3c, 0x18, 0x18, 0x18, 0x00, 0xfe, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xfe, 0x00, 0x1c, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x1c, 0x00, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x1c, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x1c, 0x00, 0x08, 0x14, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7f, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x02,
    0x1e, 0x22, 0x22, 0x1d, 0x00, 0x10, 0x10, 0x1c, 0x12, 0x12, 0x12, 0x2c, 0x00, 0x00, 0x00, 0x1c,
    0x20, 0x20, 0x20, 0x1c, 0x00, 0x02, 0x02, 0x0e, 0x12, 0x12, 0x12, 0x0d, 0x00, 0x00, 0x00, 0x1c,
    0x22, 0x3e, 0x20, 0x1c, 0x00, 0x0c, 0x12, 0x10, 0x38, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x1d,
    0x22, 0x22, 0x1e, 0x02, 0x1c, 0x20, 0x20, 0x2c, 0x32, 0x22, 0x22, 0x22, 0x00, 0x00, 0x08, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x08, 0x00, 0x08, 0x08, 0x08, 0x08, 0x30, 0x20, 0x20, 0x24,
    0x28, 0x30, 0x28, 0x24, 0x00, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0xb6,
    0x49, 0x49, 0x41, 0x41, 0x00, 0x00, 0x00, 0x2c, 0x12, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x1c,
    0x22, 0x22, 0x22, 0x1c, 0x00, 0x00, 0x00, 0x2c, 0x12, 0x12, 0x1c, 0x10, 0x10, 0x00, 0x00, 0x1a,
    0x24, 0x24, 0x1c, 0x04, 0x04, 0x00, 0x00, 0x2c, 0x30, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x1c,
    0x20, 0x18, 0x04, 0x38, 0x00, 0x00, 0x08, 0x1c, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x24,
    0x24, 0x24, 0x24, 0x1a, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x14, 0x08, 0x00, 0x00, 0x00, 0x41,
    0x41, 0x49, 0x55, 0x22, 0x00, 0x00, 0x00, 0x22, 0x14, 0x08, 0x14, 0x22, 0x00, 0x00, 0x00, 0x12,
    0x12, 0x12, 0x0e, 0x02, 0x1c, 0x00, 0x00, 0x3c, 0x04, 0x08, 0x10, 0x3c, 0x00, 0x0c, 0x10, 0x10,
    0x20, 0x10, 0x10, 0x0c, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x30, 0x08, 0x08,
    0x04, 0x08, 0x08, 0x30, 0x00, 0x00, 0x00, 0x30, 0x49, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c,
    0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c,
    0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff,
    0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x01, 0x09, 0x09,
    0x00, 0x03, 0x03, 0x03, 0x00, 0x07, 0x07, 0x06, 0x00, 0x0e, 0x0e, 0x0c, 0x00, 0x0e, 0x0e, 0x0c,
    0x00, 0x0e, 0x0e, 0x0c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xea, 0x00, 0x00, 0x08, 0xff, 0x00, 0x30, 0x01, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
};

static unsigned char* pdataFontArray = pdata + 169 * 16 + 13;
static unsigned char* pdataFont = pdata + 175 * 16 + 5;

#endif
