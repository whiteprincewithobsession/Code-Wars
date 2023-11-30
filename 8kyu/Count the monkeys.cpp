#include <vector>

std::vector<int> MonkeyCount(int n) {
  std::vector<int> res;
  for(int i = 1; i <= n; i++)
    res.push_back(i);
  return res;
}