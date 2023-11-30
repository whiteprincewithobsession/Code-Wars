#include <string>

using namespace std;

bool is_vowel(char c){
  if(c == 'A' || c =='E' || c == 'I' || c == 'O' || c == 'U') return true;
  if(c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u') return true;
  return false;
}

int getCount(const string& inputStr){
  
  int num_vowels = 0;
  for(auto c : inputStr){
    if(is_vowel(c)) num_vowels++;
  }
  //your code here
  return num_vowels;
}