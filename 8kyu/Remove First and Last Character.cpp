#include <string>

using namespace std; 

string sliceString (string str )
{
  str.erase(str.begin(), str.begin() + 1);
  str.erase(str.end() - 1, str.end());
  return str; 
}