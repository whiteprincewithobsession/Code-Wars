#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> res;
  int zeros = 0;
  for(auto i : input){
    if(i == 0) zeros++;
    else res.push_back(i);
  }
  for(int i = 0; i < zeros; i++)
    res.push_back(0);
  return res;
}