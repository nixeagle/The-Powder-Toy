#ifndef _PARTICLES_H_
#define _PARTICLES_H_

#define PT_NONE	0
#define PT_DUST	1
#define PT_WATR	2
#define PT_OILL 3
#define PT_FIRE 4
#define PT_METL 5
#define PT_LAVA 6
#define PT_GUNP	7
#define PT_NITR	8
#define PT_CLNE 9
#define PT_GASS 10
#define PT_PLEX 11
#define PT_DFRM 12
#define PT_ICEI 13
#define PT_WIRE 14
#define PT_SPRK 15
#define PT_SNOW 16
#define PT_WOOD 17
#define PT_NEUT 18
#define PT_PLUT 19
#define PT_PLNT 20
#define PT_ACID 21
#define PT_VOID 22
#define PT_WTRV 23
#define PT_CNCT 24
#define PT_DSTW 25
#define PT_SALT 26
#define PT_SLTW 27
#define PT_DMND 28
#define PT_BMTL 29
#define PT_BRMT 30
#define PT_PHOT 31
#define PT_URAN 32
#define PT_WAX  33
#define PT_MWAX 34
#define PT_PSCN 35
#define PT_NSCN 36
#define PT_LNTG 37
#define PT_FOAM 38
#define PT_BHOL 39
#define PT_WHOL 40
#define PT_RBDM 41
#define PT_LRBD 42
#define PT_HSCN 43
#define PT_SAND 44
#define PT_GLAS 45
#define PT_CSCN 46
#define PT_BGLA 47
#define PT_THDR 48
#define PT_PLSM 49
#define PT_ETRD 50
#define PT_NICE 51
#define PT_NBLE 52
#define PT_BTRY 53
#define PT_LCRY 54
#define PT_INSL 55
#define PT_SWCH 56
#define PT_NUM  57

struct part_type {
  const char *name;
  pixel pcolors;
  float advection;
  float airdrag;
  float airloss;
  float loss;
  float collision;
  float gravity;
  float diffusion;
  float hotair;
  int falldown;
  int flammable;
  int explosive;
  int meltable;
  int hardness;
  int menu;
  int menusection;
  //#ifdef HEAT_ENABLE //Locked on
  float heat;
  unsigned char hconduct;
  //#endif
  const char *descs;
};

#ifdef HEAT_ENABLE
struct part_state {
  char state;
  int solid;
  float stemp;
  int liquid;
  float ltemp;
  int gas;
  float gtemp;
  int burn;
  float btemp;
};
#endif

#endif
