#include <vector>

static long findMissing(std::vector<long> list){
  for(int i = 2; i < list.size(); i++){
    if(list[i] - list[i-1] > 0 && list[i] - list[i-1] > list[i-1] - list[i-2]){
      return (list[i] + list[i-1]) / 2;
    }
    if(list[i] - list[i-1] < 0 && list[i] - list[i-1] < list[i-1] - list[i-2]){
      return (list[i] + list[i-1]) / 2;
    }
    if(list[i] - list[i-1] > 0 && list[i] - list[i-1] < list[i-1] - list[i-2]){
      return (list[i-1] + list[i-2]) / 2;
    }
  }
  return 0;
}