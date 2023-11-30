#include <string>

std::string removeExclamationMarks(std::string str){
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '!'){
      str.erase(str.begin() + i, str.begin() + i + 1);
      i--;
      }
  }
  return str;
}