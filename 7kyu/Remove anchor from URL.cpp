#include <string>

std::string replaceAll(std::string str) {
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '#'){
      str.erase(str.begin() + i, str.end());
    }
  }
  return str;  
}