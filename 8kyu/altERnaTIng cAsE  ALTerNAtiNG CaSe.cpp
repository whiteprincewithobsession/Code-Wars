#include <string>

std::string to_alternating_case(const std::string& str)
{
	std::string res;
  for(auto i : str){
    std::islower(i) ? res.push_back(std::toupper(i)) : res.push_back(std::tolower(i));
  }
  return res;
}