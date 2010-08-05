#ifndef _UTIL_H_
#define _UTIL_H_


/// Clamp a float to an unsigned integer.
unsigned int clamp_flt(float f, float min, float max);

/// Restrict a float to a specific range.
float restrict_flt(float f, float min, float max);

#endif /* _UTIL_H_ */
