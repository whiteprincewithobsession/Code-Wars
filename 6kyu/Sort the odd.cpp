#include <vector>
#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array){
  std::vector<int> tmp;
  for(auto i : array){
    if(i % 2 == 1) tmp.push_back(i);
  }
  std::sort(tmp.begin(), tmp.end());
  for(int i = 0, j = 0; i < array.size(); i++){
    if(array[i] % 2 == 1){
      array[i] = tmp[j];
      j++;
    }
  }
  return array;
      }
};