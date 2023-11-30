#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod){
    std::vector<ull> res;
  for(ull i = 0, b = 1; ;){
    if(i * b == prod){
      res = {i, b, true};
      break;
    }
    else if(i * b > prod){
      res = {i, b, false};
      break;
    }
    int c = i + b;
    i = b;
    b = c;
  }
  return res;
  }
};