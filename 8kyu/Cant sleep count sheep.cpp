#include <string>

std::string countSheep(int number) {
  std::string res = "";
  int s = 0;
  if(number == 0) return "";
  while(s < number){
    res += std::to_string(s + 1) + " sheep...";
    s++;
  }
  return res;
}