#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  long long res = 0;
  for(auto i : busStops){
    res += i.first - i.second;
  }
  return res < 0 ? 0 : res;
}