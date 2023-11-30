#include <string>
#include <algorithm>
using namespace std ; 

string reverseString (string str )
{
  std::reverse(str.begin(), str.end());
  return str;
}