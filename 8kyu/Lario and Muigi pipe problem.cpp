#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  int max = nums.back();
  int min = nums.front();
  std::vector<int> res;
  for(int i = min; i <= max; i++){
    res.push_back(i);
  }
  return res;
}