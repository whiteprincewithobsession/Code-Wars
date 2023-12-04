#include <unordered_map>

int repeats(std::vector<int> v){
  int s = 0;
  std::unordered_map<int, int> m{};
  for(auto i : v){
    m[i]++;
  }
  for(auto i : m){
    if(i.second == 1)
      s += i.first;
  }
  return s;
}