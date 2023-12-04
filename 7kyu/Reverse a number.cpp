#include <string>
#include <algorithm>

long long reverseNumber(long long n) {
  std::string s = std::to_string(n);
  std::reverse(s.begin(), s.end());
  return n < 0 ? -std::stoll(s) : std::stoll(s);
}