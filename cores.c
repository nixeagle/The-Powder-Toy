#include "cores.h"

// Need these for _SC_NPROCESSORS_ONLN.
#ifdef WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#include <unistd.h>
#endif

// Need this to do printf.
#include <stdio.h>

int core_count(){
  int numCPU = 1;
#ifdef MT
#ifdef WIN32
  SYSTEM_INFO sysinfo;
  GetSystemInfo( &sysinfo );
  numCPU = sysinfo.dwNumberOfProcessors;
#else
#ifdef MACOSX
  numCPU = 4;
#else
  numCPU = sysconf( _SC_NPROCESSORS_ONLN );
#endif
#endif

  printf("Cpus: %d\n", numCPU);
  if(numCPU>1)
    printf("Multithreading enabled\n");
  else
    printf("Multithreading disabled\n");
#endif
  return numCPU;
}


