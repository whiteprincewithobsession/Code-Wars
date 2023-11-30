#include <string>
#include <stack>

bool validParentheses(const std::string& str) {
  std::stack<char> s;
  if(str.empty()) return true;
  for(auto i : str){
    if(i == '(') s.push(i);
    if(i == ')'){
      if(s.empty()) return false;
      else s.pop();
    }
  }
  if(s.empty()) return true;
  return false;
}