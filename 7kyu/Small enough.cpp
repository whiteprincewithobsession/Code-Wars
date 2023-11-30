#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  for(auto i : arr)
    if(i >  limit) return false;
  return true;
}