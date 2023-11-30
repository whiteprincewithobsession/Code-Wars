#include <cmath>

bool narcissistic( int value ){
  int power = log10(value) + 1;
  int t = value, sum = 0;
  while(t != 0){
    sum += pow(t % 10, power);
    t /= 10;
  }
  return sum == value;
  //Code away
}