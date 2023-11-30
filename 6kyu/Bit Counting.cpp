#include <string>

unsigned int countBits(unsigned long long n){
  std::string s = "";
  while(n != 0){
    s += std::to_string(n % 2);
    n /= 2;
    }
  int counter = 0;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '1') counter++;
  }
  return counter;
  //your code here
}