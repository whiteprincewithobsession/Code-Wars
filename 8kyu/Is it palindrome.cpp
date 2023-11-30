#include <string>
#include <algorithm>

bool isPalindrom (const std::string& str)
{
  std::string t = str;
  for(int i = 0; i < str.length(); i++){
    t[i] = std::tolower(t[i]);
  }
  std::string h = t;
  std::reverse(h.begin(),h.end());
  return h == t;
}