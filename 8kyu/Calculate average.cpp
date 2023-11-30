#include <vector>

double calcAverage(const std::vector<int>& values){
  if(values.empty()) return 0;
  double sum = 0;
  for(auto i : values)
    sum += i;
  return sum / values.size();
}