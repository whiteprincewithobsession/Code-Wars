#include <cmath>
#include <string>

class DigPow
{
public:
  static int digPow(int n, int p){
    long long sum = 0;
  auto s = std::to_string(n);
  for(auto num : s){
    sum += pow(num - '0', p);
    p++;
  }
  return sum % n == 0 ? sum / n : -1; 
  }
};