#include <cinttypes>
#include <string>
#include <algorithm>
#include <cstdlib> 

uint64_t descendingOrder(uint64_t a)
{
  std::string r = std::to_string(a);
  std::sort(r.rbegin(), r.rend());
  char* end;
  uint64_t b = strtoull( r.c_str(), &end,10 );
  return b;
}