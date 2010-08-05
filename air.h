#include "defines.h"
#ifndef _AIR_H_
#define _AIR_H_


void make_kernel(void);
void *update_air_th(void *arg);

void draw_air(pixel *vid);

void update_air(void);
#endif
