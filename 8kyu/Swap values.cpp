#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  values.first ^= values.second;
  values.second ^= values.first;values.first ^= values.second;
return values;}