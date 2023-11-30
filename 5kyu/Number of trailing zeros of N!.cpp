#include <cmath>

long zeros(long n) {
  long sum = 0;
  for(int i = 1; n / static_cast<int>(pow(5, i)) != 0; i++){
    sum += n / pow(5, i);
  }
  return sum;
}