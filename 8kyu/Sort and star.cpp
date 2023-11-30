#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end());
    std::string res;
    for(int i = 0; i < s[0].length(); i++){
      res.push_back(s[0][i]);
      if(i != s[0].length() - 1)
        res += "***";
    }
  return res;
}