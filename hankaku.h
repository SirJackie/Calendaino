#pragma once

#include <avr/pgmspace.h>

const unsigned char hankaku[256*16] PROGMEM = {
  0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0xAA ,0xAA ,0x82 ,0x82 ,0xAA ,0x92 ,0x44 ,0x38 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x38 ,0x7C ,0xFE ,0xD6 ,0xD6 ,0xFE ,0xFE ,0xD6 ,0xEE ,0x7C ,0x38 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x6C ,0xFE ,0xFE ,0xFE ,0x7C ,0x38 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x38 ,0x7C ,0xFE ,0x7C ,0x38 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x38 ,0x54 ,0xFE ,0x54 ,0x10 ,0x38 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x38 ,0x7C ,0xFE ,0xD6 ,0x10 ,0x38 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x3C ,0x3C ,0x18 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xE7 ,0xC3 ,0xC3 ,0xE7 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x3C ,0x66 ,0x42 ,0x42 ,0x66 ,0x3C ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xC3 ,0x99 ,0xBD ,0xBD ,0x99 ,0xC3 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF
 ,0x00 ,0x10 ,0x38 ,0x54 ,0x92 ,0x10 ,0x10 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x10 ,0x10 ,0xFE ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x0C ,0x0E ,0x0B ,0x0B ,0x0A ,0x08 ,0x08 ,0x18 ,0x78 ,0xF8 ,0x70 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x1F ,0x1F ,0x11 ,0x11 ,0x11 ,0x11 ,0x11 ,0x11 ,0x77 ,0xFF ,0x66 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x54 ,0x38 ,0x28 ,0x38 ,0x54 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x80 ,0xC0 ,0xE0 ,0xF0 ,0xF8 ,0xFC ,0xFE ,0xFC ,0xF8 ,0xF0 ,0xE0 ,0xC0 ,0x80 ,0x00 ,0x00
 ,0x00 ,0x02 ,0x06 ,0x0E ,0x1E ,0x3E ,0x7E ,0xFE ,0x7E ,0x3E ,0x1E ,0x0E ,0x06 ,0x02 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x10 ,0x38 ,0x54 ,0x92 ,0x10 ,0x10 ,0x10 ,0x92 ,0x54 ,0x38 ,0x10 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x44 ,0x44 ,0x44 ,0x44 ,0x44 ,0x44 ,0x44 ,0x44 ,0x00 ,0x00 ,0x44 ,0x44 ,0x00 ,0x00
 ,0x00 ,0x3E ,0x4A ,0x8A ,0x8A ,0x8A ,0x8A ,0x4A ,0x3A ,0x0A ,0x0A ,0x0A ,0x0A ,0x0A ,0x00 ,0x00
 ,0x7C ,0x82 ,0x40 ,0x20 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x08 ,0x04 ,0x82 ,0x7C ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0xFE ,0xFE ,0x00 ,0x00
 ,0x00 ,0x00 ,0x10 ,0x38 ,0x54 ,0x92 ,0x10 ,0x10 ,0x10 ,0x92 ,0x54 ,0x38 ,0x10 ,0x7C ,0x00 ,0x00
 ,0x00 ,0x10 ,0x38 ,0x54 ,0x92 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x92 ,0x54 ,0x38 ,0x10 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x08 ,0x04 ,0xFE ,0x04 ,0x08 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x20 ,0x40 ,0xFE ,0x40 ,0x20 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x80 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x28 ,0x44 ,0xFE ,0x44 ,0x28 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x10 ,0x38 ,0x38 ,0x7C ,0x7C ,0xFE ,0xFE ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0xFE ,0x7C ,0x7C ,0x38 ,0x38 ,0x10 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x28 ,0x28 ,0x28 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x44 ,0x44 ,0x44 ,0xFE ,0x44 ,0x44 ,0x44 ,0x44 ,0x44 ,0xFE ,0x44 ,0x44 ,0x44 ,0x00 ,0x00
 ,0x10 ,0x3A ,0x56 ,0x92 ,0x92 ,0x90 ,0x50 ,0x38 ,0x14 ,0x12 ,0x92 ,0x92 ,0xD4 ,0xB8 ,0x10 ,0x10
 ,0x62 ,0x92 ,0x94 ,0x94 ,0x68 ,0x08 ,0x10 ,0x10 ,0x20 ,0x2C ,0x52 ,0x52 ,0x92 ,0x8C ,0x00 ,0x00
 ,0x00 ,0x70 ,0x88 ,0x88 ,0x88 ,0x90 ,0x60 ,0x47 ,0xA2 ,0x92 ,0x8A ,0x84 ,0x46 ,0x39 ,0x00 ,0x00
 ,0x04 ,0x08 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x02 ,0x04 ,0x08 ,0x08 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x08 ,0x08 ,0x04 ,0x02 ,0x00
 ,0x80 ,0x40 ,0x20 ,0x20 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x20 ,0x20 ,0x40 ,0x80 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x92 ,0x54 ,0x38 ,0x54 ,0x92 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x10 ,0x10 ,0xFE ,0x10 ,0x10 ,0x10 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x08 ,0x08 ,0x10
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x00 ,0x00
 ,0x02 ,0x02 ,0x04 ,0x04 ,0x08 ,0x08 ,0x08 ,0x10 ,0x10 ,0x20 ,0x20 ,0x40 ,0x40 ,0x40 ,0x80 ,0x80
 ,0x00 ,0x18 ,0x24 ,0x24 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x24 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x08 ,0x18 ,0x28 ,0x08 ,0x08 ,0x08 ,0x08 ,0x08 ,0x08 ,0x08 ,0x08 ,0x08 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x42 ,0x42 ,0x02 ,0x04 ,0x08 ,0x10 ,0x20 ,0x20 ,0x40 ,0x40 ,0x7E ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x42 ,0x02 ,0x02 ,0x04 ,0x18 ,0x04 ,0x02 ,0x02 ,0x42 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x0C ,0x0C ,0x0C ,0x14 ,0x14 ,0x14 ,0x24 ,0x24 ,0x44 ,0x7E ,0x04 ,0x04 ,0x1E ,0x00 ,0x00
 ,0x00 ,0x7C ,0x40 ,0x40 ,0x40 ,0x58 ,0x64 ,0x02 ,0x02 ,0x02 ,0x02 ,0x42 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x42 ,0x40 ,0x58 ,0x64 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x7E ,0x42 ,0x42 ,0x04 ,0x04 ,0x08 ,0x08 ,0x08 ,0x10 ,0x10 ,0x10 ,0x10 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x42 ,0x42 ,0x42 ,0x24 ,0x18 ,0x24 ,0x42 ,0x42 ,0x42 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x26 ,0x1A ,0x02 ,0x42 ,0x24 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x00 ,0x00 ,0x00 ,0x00 ,0x18 ,0x18 ,0x08 ,0x08 ,0x10
 ,0x00 ,0x02 ,0x04 ,0x08 ,0x10 ,0x20 ,0x40 ,0x80 ,0x80 ,0x40 ,0x20 ,0x10 ,0x08 ,0x04 ,0x02 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x00 ,0x00 ,0xFE ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x80 ,0x40 ,0x20 ,0x10 ,0x08 ,0x04 ,0x02 ,0x02 ,0x04 ,0x08 ,0x10 ,0x20 ,0x40 ,0x80 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x04 ,0x08 ,0x10 ,0x10 ,0x00 ,0x00 ,0x18 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x9A ,0xAA ,0xAA ,0xAA ,0xAA ,0xAA ,0x9C ,0x80 ,0x46 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x18 ,0x18 ,0x18 ,0x18 ,0x24 ,0x24 ,0x24 ,0x24 ,0x7E ,0x42 ,0x42 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0xF0 ,0x48 ,0x44 ,0x44 ,0x44 ,0x48 ,0x78 ,0x44 ,0x42 ,0x42 ,0x42 ,0x44 ,0xF8 ,0x00 ,0x00
 ,0x00 ,0x3A ,0x46 ,0x42 ,0x82 ,0x80 ,0x80 ,0x80 ,0x80 ,0x80 ,0x82 ,0x42 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0xF8 ,0x44 ,0x44 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x44 ,0x44 ,0xF8 ,0x00 ,0x00
 ,0x00 ,0xFE ,0x42 ,0x42 ,0x40 ,0x40 ,0x44 ,0x7C ,0x44 ,0x40 ,0x40 ,0x42 ,0x42 ,0xFE ,0x00 ,0x00
 ,0x00 ,0xFE ,0x42 ,0x42 ,0x40 ,0x40 ,0x44 ,0x7C ,0x44 ,0x44 ,0x40 ,0x40 ,0x40 ,0xF0 ,0x00 ,0x00
 ,0x00 ,0x3A ,0x46 ,0x42 ,0x82 ,0x80 ,0x80 ,0x9E ,0x82 ,0x82 ,0x82 ,0x42 ,0x46 ,0x38 ,0x00 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x7E ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0x7C ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x7C ,0x00 ,0x00
 ,0x00 ,0x1F ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x84 ,0x48 ,0x30 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x44 ,0x48 ,0x50 ,0x50 ,0x60 ,0x50 ,0x50 ,0x48 ,0x44 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0xF0 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0x42 ,0x42 ,0xFE ,0x00 ,0x00
 ,0x00 ,0xC3 ,0x42 ,0x66 ,0x66 ,0x66 ,0x5A ,0x5A ,0x5A ,0x42 ,0x42 ,0x42 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0xC7 ,0x42 ,0x62 ,0x62 ,0x52 ,0x52 ,0x52 ,0x4A ,0x4A ,0x4A ,0x46 ,0x46 ,0xE2 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0xF8 ,0x44 ,0x42 ,0x42 ,0x42 ,0x44 ,0x78 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0xF0 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x92 ,0x8A ,0x44 ,0x3A ,0x00 ,0x00
 ,0x00 ,0xFC ,0x42 ,0x42 ,0x42 ,0x42 ,0x7C ,0x44 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0x3A ,0x46 ,0x82 ,0x82 ,0x80 ,0x40 ,0x38 ,0x04 ,0x02 ,0x82 ,0x82 ,0xC4 ,0xB8 ,0x00 ,0x00
 ,0x00 ,0xFE ,0x92 ,0x92 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x7C ,0x00 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x24 ,0x3C ,0x00 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x42 ,0x42 ,0x24 ,0x24 ,0x24 ,0x24 ,0x18 ,0x18 ,0x18 ,0x18 ,0x00 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x42 ,0x5A ,0x5A ,0x5A ,0x5A ,0x24 ,0x24 ,0x24 ,0x24 ,0x24 ,0x00 ,0x00
 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x24 ,0x24 ,0x24 ,0x18 ,0x24 ,0x24 ,0x24 ,0x42 ,0x42 ,0xE7 ,0x00 ,0x00
 ,0x00 ,0xEE ,0x44 ,0x44 ,0x44 ,0x28 ,0x28 ,0x28 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x7C ,0x00 ,0x00
 ,0x00 ,0xFE ,0x84 ,0x84 ,0x08 ,0x08 ,0x10 ,0x10 ,0x20 ,0x20 ,0x40 ,0x42 ,0x82 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x3E ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x20 ,0x3E ,0x00
 ,0x80 ,0x80 ,0x40 ,0x40 ,0x20 ,0x20 ,0x20 ,0x10 ,0x10 ,0x08 ,0x08 ,0x04 ,0x04 ,0x04 ,0x02 ,0x02
 ,0x00 ,0x7C ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x7C ,0x00
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x82 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x70 ,0x08 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x8C ,0x76 ,0x00 ,0x00
 ,0xC0 ,0x40 ,0x40 ,0x40 ,0x40 ,0x58 ,0x64 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x64 ,0x58 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x30 ,0x4C ,0x84 ,0x84 ,0x80 ,0x80 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x0C ,0x04 ,0x04 ,0x04 ,0x04 ,0x34 ,0x4C ,0x84 ,0x84 ,0x84 ,0x84 ,0x84 ,0x4C ,0x36 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0xFC ,0x80 ,0x82 ,0x42 ,0x3C ,0x00 ,0x00
 ,0x0E ,0x10 ,0x10 ,0x10 ,0x10 ,0x7C ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x7C ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x36 ,0x4C ,0x84 ,0x84 ,0x84 ,0x84 ,0x4C ,0x34 ,0x04 ,0x04 ,0x78
 ,0xC0 ,0x40 ,0x40 ,0x40 ,0x40 ,0x58 ,0x64 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0xE3 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x10 ,0x00 ,0x00 ,0x30 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x04 ,0x04 ,0x00 ,0x00 ,0x0C ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x04 ,0x08 ,0x08 ,0x30
 ,0xC0 ,0x40 ,0x40 ,0x40 ,0x40 ,0x4E ,0x44 ,0x48 ,0x50 ,0x60 ,0x50 ,0x48 ,0x44 ,0xE6 ,0x00 ,0x00
 ,0x30 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xF6 ,0x49 ,0x49 ,0x49 ,0x49 ,0x49 ,0x49 ,0x49 ,0xDB ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0x64 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0xE3 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xD8 ,0x64 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x64 ,0x58 ,0x40 ,0xE0
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x34 ,0x4C ,0x84 ,0x84 ,0x84 ,0x84 ,0x84 ,0x4C ,0x34 ,0x04 ,0x0E
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xDC ,0x62 ,0x42 ,0x40 ,0x40 ,0x40 ,0x40 ,0x40 ,0xE0 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x7A ,0x86 ,0x82 ,0xC0 ,0x38 ,0x06 ,0x82 ,0xC2 ,0xBC ,0x00 ,0x00
 ,0x00 ,0x00 ,0x10 ,0x10 ,0x10 ,0x7C ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x0E ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC6 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x42 ,0x46 ,0x3B ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x42 ,0x24 ,0x24 ,0x24 ,0x18 ,0x18 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x5A ,0x5A ,0x5A ,0x24 ,0x24 ,0x24 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xC6 ,0x44 ,0x28 ,0x28 ,0x10 ,0x28 ,0x28 ,0x44 ,0xC6 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xE7 ,0x42 ,0x42 ,0x24 ,0x24 ,0x24 ,0x18 ,0x18 ,0x10 ,0x10 ,0x60
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x82 ,0x84 ,0x08 ,0x10 ,0x20 ,0x42 ,0x82 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x06 ,0x08 ,0x10 ,0x10 ,0x10 ,0x10 ,0x60 ,0x10 ,0x10 ,0x10 ,0x10 ,0x08 ,0x06 ,0x00 ,0x00
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x00 ,0x60 ,0x10 ,0x08 ,0x08 ,0x08 ,0x08 ,0x06 ,0x08 ,0x08 ,0x08 ,0x08 ,0x10 ,0x60 ,0x00 ,0x00
 ,0x00 ,0x72 ,0x8C ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x10 ,0x28 ,0x44 ,0x82 ,0xFE ,0x82 ,0xFE ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x82 ,0x80 ,0x80 ,0x80 ,0x80 ,0x80 ,0x80 ,0x80 ,0x82 ,0x44 ,0x38 ,0x10 ,0x20
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x42 ,0x3E ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0xFE ,0x80 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x18 ,0x24 ,0x18 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x3C ,0x42 ,0x80 ,0x80 ,0x80 ,0x80 ,0x80 ,0x42 ,0x3C ,0x08 ,0x10
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0xFE ,0x80 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0xFE ,0x80 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0xFE ,0x80 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x24 ,0x24 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0xFE ,0x82 ,0x82 ,0x82 ,0x82 ,0x00 ,0x00
 ,0x00 ,0x38 ,0x44 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0xFE ,0x82 ,0x82 ,0x82 ,0x82 ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0xFE ,0x80 ,0x80 ,0x80 ,0x80 ,0xF8 ,0x80 ,0x80 ,0x80 ,0x80 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x60 ,0x1C ,0x12 ,0x72 ,0x9E ,0x90 ,0x90 ,0x92 ,0x6C ,0x00 ,0x00
 ,0x0C ,0x10 ,0x20 ,0x28 ,0x28 ,0x28 ,0xFE ,0x28 ,0x28 ,0x28 ,0x28 ,0x28 ,0x28 ,0x28 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x28 ,0x44 ,0x00 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x42 ,0x3E ,0x00 ,0x00
 ,0x10 ,0x08 ,0x04 ,0x00 ,0x00 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x42 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x00 ,0x24 ,0x24 ,0x00 ,0x82 ,0x82 ,0x44 ,0x44 ,0x28 ,0x28 ,0x10 ,0x10 ,0x20 ,0x20 ,0x40
 ,0x24 ,0x24 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x24 ,0x24 ,0x00 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x28 ,0x28 ,0x28 ,0x3C ,0x6A ,0xA8 ,0xA8 ,0xA8 ,0xA8 ,0xA8 ,0x6A ,0x3C ,0x28 ,0x28 ,0x28
 ,0x00 ,0x0C ,0x12 ,0x20 ,0x20 ,0x20 ,0xFC ,0x20 ,0x20 ,0x20 ,0x60 ,0xA0 ,0xB2 ,0x4C ,0x00 ,0x00
 ,0x00 ,0x82 ,0x82 ,0x44 ,0x28 ,0x10 ,0xFE ,0x10 ,0x10 ,0xFE ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x00 ,0xE0 ,0x90 ,0x88 ,0x88 ,0x88 ,0x94 ,0xE4 ,0x9F ,0x84 ,0x84 ,0x84 ,0x84 ,0x84 ,0x00 ,0x00
 ,0x00 ,0x0C ,0x12 ,0x10 ,0x10 ,0x10 ,0xFE ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x90 ,0x60 ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0x00 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0x00 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x0C ,0x08 ,0x10 ,0x00 ,0x00 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x42 ,0x3E ,0x00 ,0x00
 ,0x00 ,0x12 ,0x2A ,0x24 ,0x00 ,0xF8 ,0x84 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x00 ,0x00
 ,0x12 ,0x2A ,0x24 ,0x00 ,0x82 ,0xC2 ,0xC2 ,0xA2 ,0x92 ,0x92 ,0x8A ,0x86 ,0x86 ,0x82 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x78 ,0x04 ,0x04 ,0x3C ,0x44 ,0x84 ,0x84 ,0x44 ,0x3E ,0x00 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x38 ,0x44 ,0x82 ,0x82 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0xFE ,0x00 ,0x00
 ,0x00 ,0x10 ,0x10 ,0x00 ,0x00 ,0x10 ,0x10 ,0x20 ,0x44 ,0x82 ,0x82 ,0x82 ,0x44 ,0x38 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x80 ,0x80 ,0x80 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFE ,0x02 ,0x02 ,0x02 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x30 ,0x10 ,0x10 ,0x10 ,0x00 ,0xFE ,0x00 ,0x78 ,0x04 ,0x38 ,0x40 ,0x7C ,0x00 ,0x00
 ,0x00 ,0x10 ,0x30 ,0x10 ,0x10 ,0x10 ,0x00 ,0xFE ,0x00 ,0x18 ,0x28 ,0x48 ,0x7C ,0x08 ,0x00 ,0x00
 ,0x00 ,0x10 ,0x10 ,0x00 ,0x00 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x12 ,0x24 ,0x48 ,0x90 ,0x90 ,0x48 ,0x24 ,0x12 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x90 ,0x48 ,0x24 ,0x12 ,0x12 ,0x24 ,0x48 ,0x90 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44 ,0x11 ,0x44
 ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA ,0x55 ,0xAA
 ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD ,0x77 ,0xDD
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xF0 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xF0 ,0x10 ,0xF0 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF4 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFC ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xF0 ,0x10 ,0xF0 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF4 ,0x04 ,0xF4 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFC ,0x04 ,0xF4 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF4 ,0x04 ,0xFC ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xFC ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xF0 ,0x10 ,0xF0 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xF0 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x1F ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x1F ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xFF ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x1F ,0x10 ,0x1F ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x17 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x17 ,0x10 ,0x1F ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x1F ,0x10 ,0x17 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF7 ,0x00 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x00 ,0xF7 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x17 ,0x10 ,0x17 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x00 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF7 ,0x00 ,0xF7 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xFF ,0x00 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x00 ,0xFF ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x1F ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x1F ,0x10 ,0x1F ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x1F ,0x10 ,0x1F ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x1F ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0xF7 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14 ,0x14
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xFF ,0x10 ,0xFF ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0xF0 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x1F ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10 ,0x10
 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF
 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0 ,0xF0
 ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F ,0x0F
 ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0xFF ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00
};
