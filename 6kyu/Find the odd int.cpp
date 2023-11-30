#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers){
  std::map<int, int> m{};
  for(auto i : numbers)
    m[i]++;
  for(auto i : m)
    if(i.second % 2 == 1) return i.first;
  return 0;
  //your code here
}