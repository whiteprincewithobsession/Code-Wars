#include <string>
int find_short(std::string str)
{
  int len1 = 0;
  int min = 2147483647;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      min = min > len1 ? len1 : min;
      len1 = 0;
    }
    else if(i == str.length() - 1){
      len1++;
      min = min > len1 ? len1 : min;
    }
    else len1++;
  }
  return min;
}