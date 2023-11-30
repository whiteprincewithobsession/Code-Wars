#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> sortByLength(std::vector<std::string> v){
  std::sort(v.begin(), v.end(), [](std::string &s1, std::string &s2){return s1.length() < s2.length();});
 return v;    
}