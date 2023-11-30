#include <iostream>
#include <vector>
#include <string>
#include <cmath>

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
  std::vector<unsigned int> res;
  for(unsigned int i = a; i  <= b; i++){
    unsigned int num = 0;
    std::string s = std::to_string(i);
    for(int j = s.length() - 1; j >= 0; j--){
      num += pow((s[j] - '0'), j + 1);
    }
    if(num == i)
    res.push_back(num);
  }
  return res;
}