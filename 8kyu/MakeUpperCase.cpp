#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string res;
  for(auto i : input_str)
    res.push_back(std::toupper(i));
  return res;
}