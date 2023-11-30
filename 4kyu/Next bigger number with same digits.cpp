#include <string>
#include <algorithm>

long nextBigger(long n) {
  std::string s = std::to_string(n);
  int i = s.length() - 2;
  while(i >= 0 && s[i] >= s[i + 1]){
    i--;
  }
  if(i == -1){
   return -1; 
  }
  int j = s.length() - 1;
    while (s[j] <= s[i]) {
        j--;
    }
  std::swap(s[j], s[i]);
  std::reverse(s.begin() + i + 1, s.end());
  return std::stoll(s);
}