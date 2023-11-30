#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  double sum = 0;
  for(auto i : classPoints)
    sum += i;
  sum += yourPoints;
  sum /= classPoints.size() + 1;
  return yourPoints > sum;
}