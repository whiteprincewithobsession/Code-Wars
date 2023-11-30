#include <string>

std::string get_middle(std::string input) 
{
  std::string res;
  if(input.length() % 2 == 1) res.push_back(input[input.length() / 2]);
  else{
     res.push_back(input[input.length() / 2 - 1]);
     res.push_back(input[input.length() / 2]);
  }
  return res;
}