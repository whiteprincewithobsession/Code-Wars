#include <vector>

std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> vec;
  for(auto i : values){
    vec.push_back(i * 2);
  }
  return vec;
}