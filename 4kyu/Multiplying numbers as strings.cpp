#include <iostream>
#include <string>
#include <vector>

std::string multiply(std::string a, std::string b){
  std::vector<int> res(1000, 0);
  std::string sRes;
  for(int i = a.length() - 1; i >= 0; i--){
    for(int j = b.length() - 1; j >= 0; j--){
      res[res.size() - 1 - (a.length() - 1 - i) - (b.length() - 1 - j)] += (a[i] - '0') * (b[j] - '0');
      if(res[res.size() - 1 - (a.length() - 1 - i) - (b.length() - 1 - j)] > 9){
        res[res.size() - 2 - (a.length() - 1 - i) - (b.length() - 1 - j)] += res[res.size() - 1 - (a.length() - 1 - i) - (b.length() - 1 - j)] / 10;
        res[res.size() - 1 - (a.length() - 1 - i) - (b.length() - 1 - j)] %= 10;
      }
    }
  }
  bool flag = true;
  for(auto i : res){
    if(i != 0) flag = false;
    if(flag == false)
      sRes.push_back(i += '0');
  }
    return sRes.length() == 0 ? "0" : sRes;
}