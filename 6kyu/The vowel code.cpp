#include <string>
#include <unordered_map>

std::string encode(const std::string &str) {
  std::string res = str;
  std::unordered_map<char, char> m = {{'a', '1'}, {'e', '2'}, {'i', '3'}, {'o', '4'}, {'u', '5'}};
  for(int i = 0; i < res.length(); i++){
    if(m.find(res[i]) != m.end())
      res[i] = m[res[i]];
  }
  return res;
}

std::string decode(const std::string &str) {
  std::string res = str;
  std::unordered_map<char, char> m = {{'1', 'a'}, {'2', 'e'}, {'3', 'i'}, {'4', 'o'}, {'5', 'u'}};
  for(int i = 0; i < res.length(); i++){
    if(m.find(res[i]) != m.end())
      res[i] = m[res[i]];
  }
  return res;
}