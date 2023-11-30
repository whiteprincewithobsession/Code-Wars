#include <string>

std::string bumps(std::string road){
  int c = 0;
  for(auto i : road)
    if(i == 'n') c++;
  return c > 15 ? "Car Dead" : "Woohoo!";
}
