#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n){
  if(n == 1) return {{1}};
  std::vector<std::vector<int>> res(n);
  for(int i = 0; i < n; i++)
    res[i].resize(n);
  for(int i = 1; i <= n; i++){
    res[i - 1][0] = i;
    res[0][i - 1] = i;
  }
  for(int i = 1; i < n; i++){
    for(int j = 1; j < n; j++){
      res[i][j] = res[j][0] * res[i][0];
    }
  }
  return res;
}