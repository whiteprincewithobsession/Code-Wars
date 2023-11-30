#include <string>

std::string abbrevName(std::string name)
{
  std::string res;
  for(int i = 0; i < name.length(); i++)
    if(name[i] == ' '){
      res.push_back(std::toupper(name[0]));
      res.push_back('.');
      res.push_back(std::toupper(name[i + 1]));
    }
  return res;
}
