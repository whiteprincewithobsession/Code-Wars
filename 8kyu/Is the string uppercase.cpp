#include <string>

bool is_uppercase(const std::string &s) {
  for(auto i : s)
    if(i != std::toupper(i)) return false;
  return true;
}