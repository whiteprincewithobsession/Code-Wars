#define _USE_MATH_DEFINES
#include <math.h>


double square_area(double A) {
  return round(powl(2 * A / M_PI , 2) * 100) / 100;
};