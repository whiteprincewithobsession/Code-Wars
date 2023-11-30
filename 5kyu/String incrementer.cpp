#include <string>
#include <sstream>

std::string incrementString(const std::string& str) {
    size_t nonDigitPos = str.size();
    while (nonDigitPos > 0 && std::isdigit(str[nonDigitPos - 1])) {
        --nonDigitPos;
    }
    std::string prefix = str.substr(0, nonDigitPos);
    std::string numericPart = str.substr(nonDigitPos);
    if (numericPart.empty()) {
        return prefix + "1";
    }
    int number = std::stoi(numericPart);
    ++number;
    std::ostringstream oss;
    oss << number;
    std::string incrementedNumericPart = oss.str();
    size_t width = numericPart.size();
    if (incrementedNumericPart.size() < width) {
        incrementedNumericPart = std::string(width - incrementedNumericPart.size(), '0') + incrementedNumericPart;
    }

    return prefix + incrementedNumericPart;
}