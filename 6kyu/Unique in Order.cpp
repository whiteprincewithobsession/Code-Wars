#include <string>
#include <vector>
#include <map>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  std::vector<T> res;
  if(iterable.empty()) return res;
  res.push_back(iterable[0]);
  for(int i = 1; i < iterable.size(); i++){
    if(res.back() != iterable[i]) res.push_back(iterable[i]);
  }
  return res;
  //your code here
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  std::vector<char> res;
  if(iterable.empty()) return res;
  res.push_back(iterable[0]);
  for(int i = 1; i < iterable.size(); i++){
    if(res.back() != iterable[i]) res.push_back(iterable[i]);
  }
  return res;
}