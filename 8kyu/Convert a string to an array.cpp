#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> res;
    std::string tmp = "";
    if(s == "") res.push_back("");
    for(int i = 0; i < s.length(); i++){
    if(s[i] == ' '){
      res.push_back(tmp);
      tmp = "";
    }
    else if(i == s.length() - 1){
      tmp.push_back(s[i]);
      res.push_back(tmp);
    }
    else tmp.push_back(s[i]);
  }
  return res;
}