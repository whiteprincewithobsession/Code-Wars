#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string r1, r2;
    for(int i = 0; i < s.length(); i++){
      if(i % 2 == 1){
        r1.push_back(s[i]);
        r2.push_back(std::toupper(s[i]));
      }
      else{
        r1.push_back(std::toupper(s[i]));
        r2.push_back(s[i]);
      }
    }
  return {r1, r2};
}