#include <algorithm>
#include <cctype>
#include <string>

std::string solve(const std::string &s) {
    std::string str = s;
    int lowerCount = std::count_if(str.begin(), str.end(), ::islower);
    int upperCount = str.size() - lowerCount;
    if (upperCount > lowerCount) {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    } else {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    return str;
}