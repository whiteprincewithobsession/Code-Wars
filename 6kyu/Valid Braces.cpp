#include <stack>
#include <string>

bool valid_braces(std::string braces) 
{
  std::stack<char> br;
  for(auto c : braces){
    if(c == '{' || c == '(' || c == '[') br.push(c);
    if(c == '}' || c == ')' || c == ']'){
      if(br.empty()) return false;
      if(c == '}' && br.top() != '{') return false;
      if(c == ')' && br.top() != '(') return false;
      if(c == ']' && br.top() != '[') return false;
      br.pop();
    }
  }
  return true;
}