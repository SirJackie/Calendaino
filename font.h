#include "Duino9341.h"
#include "hankaku.h"
#include <avr/pgmspace.h>

#define COL8_000000   0
#define COL8_FF0000   1
#define COL8_00FF00   2
#define COL8_FFFF00   3
#define COL8_0000FF   4
#define COL8_FF00FF   5
#define COL8_00FFFF   6
#define COL8_FFFFFF   7
#define COL8_C6C6C6   8
#define COL8_840000   9
#define COL8_008400   10
#define COL8_848400   11
#define COL8_000084   12
#define COL8_840084   13
#define COL8_008484   14
#define COL8_848484   15



struct BOOTINFO{
  char cyls, leds, vmode, reserve;
  short screenWidth, screenHeight;
  char *VideoRamAddress;
};

void video_putChar8(int x, int y, int color, char *char_binary){
  
  char d /* data */;
  for (int i = 0; i < 16; i++) {
    //d = char_binary[i];
    d = pgm_read_byte( (char_binary + i) );
    if ((d & 0x80) != 0) { LcdSetPixel(x+0, y+i, color); }
    if ((d & 0x40) != 0) { LcdSetPixel(x+1, y+i, color); }
    if ((d & 0x20) != 0) { LcdSetPixel(x+2, y+i, color); }
    if ((d & 0x10) != 0) { LcdSetPixel(x+3, y+i, color); }
    if ((d & 0x08) != 0) { LcdSetPixel(x+4, y+i, color); }
    if ((d & 0x04) != 0) { LcdSetPixel(x+5, y+i, color); }
    if ((d & 0x02) != 0) { LcdSetPixel(x+6, y+i, color); }
    if ((d & 0x01) != 0) { LcdSetPixel(x+7, y+i, color); }
  }
  return;
}

void video_putString8(int x, int y, int color, unsigned char *stringPointer){
  for(; *stringPointer != 0x00; stringPointer++){
    video_putChar8(x, y, color, hankaku + *stringPointer * 16);
    x += 8;
  }
  return;
}

inline int rgbhex(unsigned long hexcolor){
  unsigned short b = hexcolor & 0xFF;
  hexcolor = hexcolor >> 8;
  unsigned short g = hexcolor & 0xFF;
  hexcolor = hexcolor >> 8;
  unsigned short r = hexcolor & 0xFF;
  
  Serial.println(hexcolor);
  Serial.println(g);
  Serial.println(b);
  
  r = r / 8;
  g = g / 4;
  b = b / 8;
  
  return RGB(r, g, b);
}
