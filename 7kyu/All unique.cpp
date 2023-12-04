#include <unordered_map>
#include <string>

bool hasUniqueChars(std::string s) {
  std::unordered_map<char, bool> m{};
  for(auto i : s){
    if(m[i] == true) return false;
    m[i] = true;
  }
  return true;
}