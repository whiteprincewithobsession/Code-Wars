#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if(input.empty()) return {};
    std::vector<int> res(2);
    for(auto i : input){
      if(i < 0) res[1] += i;
      if(i > 0) res[0]++;
    }
    return res;
}