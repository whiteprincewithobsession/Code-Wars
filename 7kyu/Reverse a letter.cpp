#include <string>
#include <algorithm>

std::string reverse_letter(const std::string &str)
{
  std::string r;
  for(auto i : str)
    if(std::isalpha(i))
      r.push_back(i);
  std::reverse(r.begin(), r.end());
  return r; //coding and coding..
}