#include <string>
#include <unordered_map>


std::string duplicate_encoder(const std::string& word){
  std::unordered_map<char, int> m;
  std::string res;
  for(auto i : word){
    m[tolower(i)]++;
    }
  for(auto i : word){
    res.push_back(m[tolower(i)] == 1 ? '(' : ')');
  }
  return res;
}