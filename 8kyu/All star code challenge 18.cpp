#include <string>

unsigned int strCount(const std::string& word, char letter){
  int s = 0;
  for(auto i : word)
    if(i == letter) s++;
  return s; // your code here
}