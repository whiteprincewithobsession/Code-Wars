#include <string>
#include <unordered_map>

bool is_isogram(std::string str) {
  std::unordered_map<char, bool> m;
  for(int i = 0; i < str.length(); i++){
    str[i] = std::tolower(str[i]);
    if(m[str[i]] == true) return false;
      else m[str[i]] = true;
  }
  return true;
}
