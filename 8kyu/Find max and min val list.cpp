#include <vector>
using namespace std;

int min(vector<int> list){
    int m = list[0];
    for(auto i : list){
      if(i < m) m = i;
    }
    return m;
}

int max(vector<int> list){
    int m = list[0];
    for(auto i : list){
      if(i > m) m = i;
    }
    return m;
}