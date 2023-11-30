#include <iostream>
#include <string>
#include <stack>

int prec(char c)
{
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

std::string to_postfix(std::string infix)
{

  std::stack<char> st;
  std::string result;
  for (int i = 0; i < infix.length(); i++) {
    char c = infix[i];
    if (c >= '0' && c <= '9') result += c;
    else if (c == '(') st.push('(');
    else if (c == ')') {
      while (st.top() != '(') {
          result += st.top();
          st.pop();
      }
      st.pop();
    }
    else {
      while (!st.empty() && prec(infix[i]) <= prec(st.top())) {
       result += st.top();
       st.pop();
      }
      st.push(c);
     }
  }
  while (!st.empty()) {
    result += st.top();
    st.pop();
  }

  return result;
}