#include <string>

std::string cleanString(const std::string &s) {
  std::string tmp = s;
  for(int i = 0; i < tmp.length(); i++){
    if(tmp[i] == '#'){
      if(i == 0){
        tmp.erase(tmp.begin(), tmp.begin() + 1);
        i--;
      }
      else{
      tmp.erase(tmp.begin() + i - 1, tmp.begin() + i + 1);
      i -= 2;
      }
    }
  }
  return tmp;
}