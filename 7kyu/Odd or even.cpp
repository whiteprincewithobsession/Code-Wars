#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
  int s = 0;
  for(auto i : arr)
    s += i;
    return s % 2 == 1 || s % 2 == -1 ? "odd" : "even"; // your code here
}