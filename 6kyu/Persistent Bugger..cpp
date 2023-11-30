#include <string>

int persistence(long long n){
  int count = 0;
  auto s = std::to_string(n);
  while(s.length() > 1){
    long long mul = 1;
    for(auto it : s){
      mul *= (it - '0');
    }
    count++;
    s = std::to_string(mul);
  }
  return count;
}