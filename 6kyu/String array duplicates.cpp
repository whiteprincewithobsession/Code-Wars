#include <vector>
#include <string>

std::vector<std::string> dup(std::vector<std::string> arr){    
    for(int i = 0; i < arr.size(); i++){
      for(int j = 0; j < arr[i].length() - 1; j++){
        if(arr[i][j] == arr[i][j + 1]){
          arr[i].erase(arr[i].begin() + j, arr[i].begin() + j + 1);
          j--;
        }
      }
    }
  return arr;
}