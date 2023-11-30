#include <vector>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
  int s = 0;
    for(int i = 0; i < numbers.size(); i++){
      int min = numbers[i][0];
      for(int j = 0; j < numbers[i].size(); j++){
        if(min > numbers[i][j]) min = numbers[i][j];
      }
      s += min;
    }
  return s;
}