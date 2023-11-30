#include <string>
#include <vector>

std::vector<long> numbersWithDigitInside(long x, long d)
{
    std::vector<long> result{0, 0, 1};
    long t = 1;
    while(t <= x){
      std::string tmp = std::to_string(t);
      if(tmp.find(std::to_string(d)) != std::string::npos){
        result[0]++;
        result[1] += t;
        result[2] *= t;
      }
      t++;
    }
    if(result[0] == 0 || x < d) return {0, 0, 0};
    return result;
}