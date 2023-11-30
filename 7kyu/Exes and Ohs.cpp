#include <string>

bool XO(const std::string& str)
{
  int x_c = 0;
  int o_c = 0;
  for(auto i : str){
    if(std::tolower(i) == 'x') x_c++;
    else if(std::tolower(i) == 'o') o_c++;
  }
  return x_c == o_c ? true : false;
}