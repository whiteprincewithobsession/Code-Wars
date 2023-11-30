#include <vector>

std::vector<int> digitize(unsigned long n) 
{         
  if(n == 0) return std::vector<int>(1);
  std::vector<int> res;
  while(n != 0){
    res.push_back(n % 10);
    n /= 10;
  } 
  return res;
}