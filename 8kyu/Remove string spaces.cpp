#include <string>

std::string no_space(const std::string& x)
{
  std::string res = x;
  for(int i = 0; i < res.length(); i++){
    if(res[i] == ' '){
      res.erase(res.begin() + i, res.begin() + i + 1);
      i--;
      }
  }
  return res;
}