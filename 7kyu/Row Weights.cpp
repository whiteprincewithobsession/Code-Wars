#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  pair<int, int> p(0, 0);
  for(int i = 0; i < weights.size(); i++){
    if((i + 1) % 2 == 1) p.first += weights[i];
    else p.second += weights[i];
  }
  return p;
}