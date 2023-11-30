#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int c = 0;
  for(auto i : arr)
    c += i;
  return c;
}