#include <set>
#include <string>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      std::set<char> r;
      for(auto i : s1){
        r.insert(i);
      }
      for(auto i : s2){
        r.insert(i);
      }
      std::string s;
      for(auto i : r)
        s.push_back(i);
      return s;
    }
};