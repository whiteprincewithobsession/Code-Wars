#include <vector>

int FindOutlier(std::vector<int> arr)
{
    bool flag = false;
    int even = 0, odd = 0;
    for(int i = 0; i < 3; i++){
      if(arr[i] % 2 == 0 ) even++;
      if(arr[i] % 2 == 1 || arr[i] % 2 == -1) odd++;
    }
    flag = even > odd ? true : false;
    for(auto i : arr){
      if(flag == true && (i % 2 == 1  || i % 2 == -1)) return i;
      else if(flag == false && i % 2 == 0) return i;
    }
    return 0;
}