#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  std::vector<int> r;
  if(n == 0) return {};
  for(int i = arr.size() - 1; i >= 0; i--){
    if(arr[i] % 2 == 0){
      n--;
      r.push_back(arr[i]);
      if(n == 0) break;
    }
  }
  std::reverse(r.begin(), r.end());
  return r;
}