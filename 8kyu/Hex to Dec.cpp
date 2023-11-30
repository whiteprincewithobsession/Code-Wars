#include <cmath>
#include <string>

int hexToDec(std::string s)
{
    int res = 0;
    bool minus = false;
    if(s[0] == '-'){
      minus = true;
      s.erase(s.begin());
    }
    for(int i = s.length() - 1; i >= 0; i--){
      if(std::isalpha(s[i])){
        s[i] = std::toupper(s[i]);
        res += (s[i] - 'A' + 10) * pow(16, s.length() - 1 - i);
      }
      else res += (s[i] - '0') * pow(16, s.length() - 1 - i);
    }
    return minus ? -res : res;
}