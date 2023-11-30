#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  auto m = list[0];
  for(auto i : list){
    m = m < i ? m : i; 
  }
  return m;
}