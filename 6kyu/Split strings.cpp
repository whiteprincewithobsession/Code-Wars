#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::string tmp = "";
    if(s.empty()) return {};
    std::vector<std::string> res;
    for(int i = 0; i < s.length(); i++){
      tmp.push_back(s[i]);
      if(i % 2 == 1 || i == s.length()- 1){
        res.push_back(tmp);
        tmp = "";
      }
    }
    if(res.back().length() == 1) res.back().push_back('_') ; 
    return res;
}
