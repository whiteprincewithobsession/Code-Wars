#include <vector>

int nthFibo(int n) { 
  std::vector<int> res{0, 1};
  while(res.size() < n){
    res.push_back(res[res.size() - 2] + res.back());
  }
  return res[n - 1];
}