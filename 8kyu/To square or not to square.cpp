#include <vector>
#include <cmath>

std::vector<int> squareOrSquareRoot(const std::vector<int>& array)
{
    // TODO: Return a new vector with squares mapped to their square-root, and non-squares mapped to their square.
    std::vector<int> r;
    if(array.empty()) return {};
    for(auto i : array){
      if(sqrt(i) == ceil(sqrt(i))) r.push_back(std::sqrt(i));
      else r.push_back(std::pow(i, 2));
    }
    return r;
}