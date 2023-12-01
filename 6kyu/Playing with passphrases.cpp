#include <iostream>
#include <string>
#include <algorithm>

class PlayPass
{
  public:
  static char shift(char c, int n ){
  if(c >= 'A' && c <= 'Z'){
    c = (c - 'A' + n) % 26 + 'A'; 
  }
  else if(c >= 'a' && c <= 'z'){
    c = (c - 'a' + n) % 26 + 'a';
  }
  return c;
}
  static std::string playPass(const std::string &s, int n){
  std::string res;
  for(int i = 0; i < s.length(); i++){
    if(std::isdigit(s[i]))
    res.push_back('9' - s[i] + '0');
    else res.push_back(s[i]);
  }
  for(int i = 0; i < res.length(); i++){
    res[i] = shift(res[i], n);
    if(std::isalpha(res[i]) && i % 2 == 1)
      res[i] = std::tolower(res[i]);
  }
  std::reverse(res.begin(), res.end());
  return res;
}
};