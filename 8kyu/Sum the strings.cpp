#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    std::string a1 = a, b1 = b;
    if(a.empty()) a1 = "0";
    if(b.empty()) b1 = "0";
    return std::to_string(std::stoll(a1) + std::stoll(b1));
}