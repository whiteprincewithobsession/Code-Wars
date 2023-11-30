#include <vector>

int positive_sum (const std::vector<int> arr){
  int res = 0;
  for(auto i : arr){
    res += i > 0 ? i : 0;
  }
  return res;
}