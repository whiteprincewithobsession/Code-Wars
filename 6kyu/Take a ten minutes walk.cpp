#include<vector>

bool isValidWalk(std::vector<char> walk) {
  int w = 0, e = 0, n = 0, s = 0;
  for(int i = 0; i < walk.size(); i++){
    if(walk[i] == 'w') w++;
    if(walk[i] == 'e') e++;
    if(walk[i] == 'n') n++;
    if(walk[i] == 's') s++;
  }
  if(n == s && w == e && walk.size() == 10) return true;
  return false;
}