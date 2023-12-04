#include <string>
#include <algorithm>
#include <bitset>

int nextHigher(int value)
{    
  std::string bin = std::bitset<32>(value).to_string();
  std::next_permutation(bin.begin(), bin.end());
  int val = std::bitset<32>(bin).to_ullong();
  return val;
}