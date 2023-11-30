#include <vector>

int get_average(std::vector <int> marks)
{
  int avg = 0;
  for(auto i : marks)
    avg += i;
  return avg / marks.size();
}