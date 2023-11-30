#include <string>

std::string uint32_to_ip(uint32_t ip)
{
  std::string s = "";
  s += std::to_string((ip>>24) & 0xFF) + "." + std::to_string((ip>>16) & 0xFF) + "." + std::to_string((ip>>8) & 0xFF) + "." + std::to_string(ip & 0xFF);
  // your code here
  return s;
}