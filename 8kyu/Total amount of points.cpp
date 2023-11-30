#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
    int sc = 0;
    for(auto i : games){
      if(i.front() > i.back()) 
        sc += 3;
      if(i.front() == i.back())
        sc += 1;
      }
    return sc;
}