#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> nums) {
  std::sort(nums.begin(), nums.end());
  return nums;
}