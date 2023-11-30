#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::string tmp = "";
  std::vector<std::string> res{};
  for(int i = 1; i <= nFloors; i++){
    tmp.append(nFloors - i, ' ');
    tmp.append(i * 2 - 1, '*');
    tmp.append(nFloors - i, ' ');
    res.push_back(tmp);
    tmp = "";
  }
  return res;
}