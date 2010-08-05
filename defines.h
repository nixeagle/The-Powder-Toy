#ifndef _DEFINES_H_
#define _DEFINES_H_

/** Server to connect to for user accounts and creations.

    @todo Might be possible to ask for the source of the server?
*/
#define SERVER "powder.hardwired.org.uk"

#undef PLOSS

#ifdef MENUV3
	#define MENUSIZE 40

#else
	#define MENUSIZE 20

#endif

#define BARSIZE 14
#define XRES    612
#define YRES    384
#define NPART XRES*YRES

#define ZSIZE_D 16
#define ZFACTOR_D       8
unsigned char ZFACTOR = 256/ZSIZE_D;
unsigned char ZSIZE = ZSIZE_D;


#define CELL    4
#define ISTP    (CELL/2)
#define CFDS    (4.0f/CELL)

#ifdef PIX16
#define PIXELSIZE 2
typedef unsigned short pixel;
#define PIXPACK(x) ((((x)>>8)&0xF800)|(((x)>>5)&0x07E0)|(((x)>>3)&0x001F))
#define PIXRGB(r,g,b) ((((r)<<8)&0xF800)|(((g)<<3)&0x07E0)|(((b)>>3)&0x001F))
#define PIXR(x) (((x)>>8)&0xF8)
#define PIXG(x) (((x)>>3)&0xFC)
#define PIXB(x) (((x)<<3)&0xF8)
#else
#define PIXELSIZE 4
typedef unsigned int pixel;
#ifdef PIX32BGR
#define PIXPACK(x) ((((x)>>16)&0x0000FF)|((x)&0x00FF00)|(((x)<<16)&0xFF0000))
#define PIXRGB(r,g,b) (((b)<<16)|((g)<<8)|((r)))// (((b)<<16)|((g)<<8)|(r))
#define PIXR(x) ((x)&0xFF)
#define PIXG(x) (((x)>>8)&0xFF)
#define PIXB(x) ((x)>>16)
#else
#ifdef PIX32BGRA
#define PIXPACK(x) ((((x)>>8)&0x0000FF00)|(((x)<<8)&0x00FF0000)|(((x)<<24)&0xFF000000))
#define PIXRGB(r,g,b) (((b)<<24)|((g)<<16)|((r)<<8))
#define PIXR(x) (((x)>>8)&0xFF)
#define PIXG(x) (((x)>>16)&0xFF)
#define PIXB(x) (((x)>>24))
#else
#define PIXPACK(x) (x)
#define PIXRGB(r,g,b) (((r)<<16)|((g)<<8)|(b))
#define PIXR(x) ((x)>>16)
#define PIXG(x) (((x)>>8)&0xFF)
#define PIXB(x) ((x)&0xFF)
#endif
#endif
#endif
#endif
