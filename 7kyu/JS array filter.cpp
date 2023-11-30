#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
  std::vector<int> res;
  for(auto i : arr)
    if(i % 2 == 0) res.push_back(i);
  return res;
}