#include <string>

std::string gimme_the_letters(const std::string& sp)
{
    std::string res;
    char s = sp.front();
    char e = sp.back();
    for(auto i = s; i <= e; i++)
      res.push_back(i);
  return res;
}