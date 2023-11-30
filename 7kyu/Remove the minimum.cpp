#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
  if(numbers.empty()) return {};
  int m = numbers[0];
  int ind = 0;
  for(int i = 0; i < numbers.size(); i++){
    if(m > numbers[i]){
      m = numbers[i];
      ind = i;
    }
  }
  std::vector<unsigned int> res;
  for(int i = 0; i < numbers.size(); i++){
    if(i == ind) continue;
    res.push_back(numbers[i]);
  }
  return res;
}