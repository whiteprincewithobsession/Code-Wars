#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr){
  int s = 0;
  std::vector<int> arr2 = arr;
  std::sort(arr2.begin(), arr2.end());
  for(int i = 1; i < arr2.size(); i++){
    s += arr2[i] - arr2[i - 1];
  }
  return s;
}