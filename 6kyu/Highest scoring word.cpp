#include <string>

std::string highestScoringWord(const std::string &str)
{
  std::string res = "";
  std::string tmp = "";
  int sc = 0;
  int tmp2 = 0;
  for(int i = 0; i < str.length(); i++){
    if(!std::isalpha(str[i])){
      for(auto i : tmp)
        tmp2 += i - 'a' + 1;
      if(tmp2 > sc){
        res = tmp;
        sc = tmp2;
      }
      tmp = ""; tmp2 = 0;
    }
    else{
      tmp.push_back(str[i]);
    }
  }
  for(auto i : tmp)
        tmp2 += i - 'a' + 1;
  if(tmp2 > sc){
      res = tmp;
    }
  return res;
}