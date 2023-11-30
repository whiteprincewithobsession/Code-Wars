#include <vector>

using namespace std; 

int adjacentElementsProduct(vector<int> v) 
  {
      int mult = v[0] * v[1];
      for(int i = 1; i < v.size(); i++){
        if(v[i] * v[i - 1] > mult)
          mult = v[i] * v[i - 1];
      }
  return mult;
  }