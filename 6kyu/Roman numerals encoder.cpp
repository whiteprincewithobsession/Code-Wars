#include <iostream>
#include <string>

std::string solution(int number) {
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::string result = "";
    for (int i = 0; i < 13; ++i) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }

    return result;
}