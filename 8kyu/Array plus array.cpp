#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int s = 0;
  for(auto i : a)
    s += i;
  for(auto i : b)
    s += i;
  return s; // something went wrong
}