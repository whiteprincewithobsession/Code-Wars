#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
  age1 *= age1;
  age2 *= age2;
  age3 *= age3;
  age4 *= age4;
  age5 *= age5;
  age6 *= age6;
  age7 *= age7;
  age8 *= age8;
  int sum = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8;
  return sqrt(sum) / 2;
}