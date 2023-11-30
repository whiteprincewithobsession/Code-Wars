#include <string>
using namespace std;

bool is_letter(char c){
  if(c >= 'A' && c <= 'Z') return true;
  else if(c >= 'a' && c <= 'z') return true;
  return false;
}

string rot13(string msg)
{
  std::string res;
  for(auto i : msg){
    if(is_letter(i)){
      res.push_back(i >= 'a' ? (i - 'a' + 13) % 26 + 'a' : (i - 'A' + 13) % 26 + 'A');
    }
    else res.push_back(i);
  }
  return res;
}