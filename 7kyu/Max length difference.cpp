#include <string>
#include <vector>
#include <cmath>

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2){
      int m = 0;
      if(a1.empty() || a2.empty()) return -1;
      for(auto i : a1){
        for(auto j : a2){
          if(fabsl(i.length() - j.length()) > m)
             m = fabs(i.length() - j.length());
        }
      }
      return m;
    }
};