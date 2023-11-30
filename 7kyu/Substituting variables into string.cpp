#include <string>

std::string solution(int n) {
  std::string res = "Value is ";
  res.append(5 - std::to_string(n).length(), '0');
  return res + std::to_string(n);
}