#include <string>

long long filter_string(const std::string &value)
{
  std::string r;
  for(auto i : value){
    if(std::isdigit(i))
      r.push_back(i);
  }
    return std::stoll(r); // complete this function :)
}