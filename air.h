#include "defines.h"
#ifndef _AIR_H_
#define _AIR_H_

unsigned char bmap[YRES/CELL][XRES/CELL];
unsigned char emap[YRES/CELL][XRES/CELL];
unsigned cmode = 3;

float vx[YRES/CELL][XRES/CELL], ovx[YRES/CELL][XRES/CELL];
float vy[YRES/CELL][XRES/CELL], ovy[YRES/CELL][XRES/CELL];
float pv[YRES/CELL][XRES/CELL], opv[YRES/CELL][XRES/CELL];
float fvx[YRES/CELL][XRES/CELL], fvy[YRES/CELL][XRES/CELL];


void *update_air_th(void *arg);

void draw_air(pixel *vid);

void update_air(void);
#endif
