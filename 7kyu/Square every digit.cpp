#include <string>

int square_digits(int num) {
  std::string s = std::to_string(num);
  std::string res = "";
  for(auto i : s){
    res += std::to_string((i - '0') * (i - '0'));
  }
  return stoi(res);
}