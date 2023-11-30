#include <string>
#include <unordered_map>

std::size_t duplicateCount(const std::string& in)
{
  std::unordered_map<char, int> m;
  int c = 0;
  for(auto i : in){
    m[std::tolower(i)]++;
    if(m[std::tolower(i)] == 2) c++;
  }
  return c;
}