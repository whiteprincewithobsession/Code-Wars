#include <unordered_map>

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  std::vector<int> res;
  std::unordered_map<int, int> oc;
  for(auto i : arr){
    oc[i]++;
    if(oc[i] <= n) res.push_back(i);
  }
  return res;
  
}