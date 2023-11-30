#include <vector>
#include <string>

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
    for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j < arr[i].length(); j++){
      arr[i][j] = toupper(arr[i][j]);
    }
  }
  if(arr.size() == 1) return arr;
  for(int i = 1; i < arr.size(); i++){
    if((arr[i] == "SOUTH" && arr[i - 1] == "NORTH") || (arr[i] == "NORTH" && arr[i - 1] == "SOUTH" )){
      arr.erase(arr.begin() + i - 1, arr.begin() + i + 1);
      i = 0;
    }
    else if((arr[i] == "EAST" && arr[i - 1] == "WEST") || (arr[i] == "WEST" && arr[i - 1] == "EAST" )){
      arr.erase(arr.begin() + i - 1, arr.begin() + i + 1);
      i = 0;
    }
    if(arr.size() == 1 || arr.size() == 0) break;
  }
  return arr;
    }
};