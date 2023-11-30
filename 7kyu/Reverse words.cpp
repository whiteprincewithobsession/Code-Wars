#include <vector>
#include <string>

std::string reverse_words(std::string str)
{
  std::vector<std::string> vec;
  std::string tmp = "";
  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      vec.push_back(tmp);
      tmp = "";
    }
    else tmp += str[i];
    if(i == str.length() - 1 && tmp != ""){
      vec.push_back(tmp);
    }
  }
  for(int i = 0; i < vec.size(); i++){
    std::reverse(vec[i].begin(), vec[i].end());
  }
  tmp = "";
  for(int i = 0; i < vec.size(); i++){
    tmp += vec[i];
    if(i != vec.size() - 1) tmp += " ";
  }
  if(str[str.length() - 1] == ' ') tmp += ' ';
  return tmp;
}