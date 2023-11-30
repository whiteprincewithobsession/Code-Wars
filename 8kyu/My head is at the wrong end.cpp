#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  std::reverse(arr.begin(), arr.end());
  return arr;
}