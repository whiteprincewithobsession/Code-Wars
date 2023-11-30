#include <cstdint>
#include <string>
#include <algorithm>

std::string add_binary(uint64_t a, uint64_t b) {
    auto s = a + b;
    std::string r = "";
    while(s){
      r += std::to_string(s & 1);
      s >>= 1; 
    } 
    std::reverse(r.begin(), r.end());
    return r == "" ? "0" : r;
}