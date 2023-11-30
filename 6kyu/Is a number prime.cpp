#include <algorithm>
#include <cmath>

bool isPrime(int num) {
  float end = sqrt(float(num));
  if(num == 1 || num <= 0) return false;
  for(int i = 2; i <= end; i++){
    if(num % i == 0)
      return false;
  }
  return true;
}