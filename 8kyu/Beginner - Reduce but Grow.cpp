#include <vector>
int grow(std::vector<int> nums) {
  int r = 1;
  for(auto i : nums)
    r *= i;
  return r;
}