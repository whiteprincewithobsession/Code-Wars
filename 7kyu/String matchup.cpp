#include <vector>
#include <string>

std::vector<int> solve(std::vector<std::string>a,std::vector<std::string>b){
    std::vector<int> r{};
    for(int i = 0; i < b.size(); i++){
      int s = 0;
      for(int j = 0; j < a.size(); j++){
        if(b[i] == a[j]) s++;
      }
      r.push_back(s);
    }
  return r;
}