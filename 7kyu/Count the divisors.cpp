#include <cmath>

int divisors(int n){  
  int d = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0) d++;
  }
  return d;
}