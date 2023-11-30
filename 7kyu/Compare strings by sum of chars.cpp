#include <string>

bool compare(std::string s1, std::string s2)
{
  int ss1 = 0, ss2 = 0;
  for(auto i : s1){
    if(std::toupper(i) < 'A' || std::toupper(i) > 'Z'){
      ss1 = 0;
      break;
    }
    ss1 += std::toupper(i);
    }
  for(auto i : s2){
    if(std::toupper(i) < 'A' || std::toupper(i) > 'Z'){
      ss2 = 0;
      break;
    }
    ss2 += std::toupper(i);
    }
  return ss1 == ss2 ? true : false;
    //just do it!
}