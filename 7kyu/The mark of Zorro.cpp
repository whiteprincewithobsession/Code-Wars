#include <vector> 

template <typename T> std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
  std::vector<T> res{};
  if(matrix.size() == 0) return res;
  for(int i = 0; i < matrix[0].size() - 1; i++)
    res.push_back(matrix[0][i]);
  for(int i = matrix[0].size() - 1; i >= 0 ; i--)
    res.push_back(matrix[matrix[0].size() - 1 - i][i]);
  for(int i = 1; i < matrix[0].size(); i++){
    res.push_back(matrix[matrix.size() - 1][i]);
  }
  return res;
}