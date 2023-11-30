#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> res;
    for(auto i : string)
      res[i]++;
    return res;
}