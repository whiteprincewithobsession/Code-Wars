#include <iostream>
#include <string>
#include <sstream>

bool is_digit(std::string s) {
    std::istringstream iss(s);
    double value;
    char remaining;
    if (iss >> value && !(iss >> remaining))
        return true;

    return false;
}