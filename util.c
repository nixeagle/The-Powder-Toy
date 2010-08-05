/** All functions in here are not dependent on anything else but possibly
    other functions also defined in this file.
*/

#include "util.h"

unsigned int clamp_flt(float f, float min, float max)
{
  if(f<min)
    return 0;
  if(f>max)
    return 255;
  return (int)(255.0f*(f-min)/(max-min));
}

float restrict_flt(float f, float min, float max){
  if(f<min)
    return min;
  if(f>max)
    return max;
  return f;
}
