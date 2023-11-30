#include <vector>

std::vector<double> distancesFromAverage(std::vector<int> input)
{
    std::vector<double> res;
    double avg = 0;
    for(auto i : input)
      avg += i;
    avg /= input.size();
    for(int i = 0; i < input.size(); i++)
      res.push_back(avg - input[i]);
  return res;
}