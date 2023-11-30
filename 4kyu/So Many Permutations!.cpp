#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> permutations(std::string s) {
  std::sort(s.begin(), s.end());
  std::vector<std::string> all_strings;
  do{
    all_strings.push_back(s);
  } while(std::next_permutation(s.begin(), s.end()));
  return all_strings;
}