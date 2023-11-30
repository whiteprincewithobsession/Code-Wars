#include <iostream>
#include <vector>
#include <regex>

int countSmileys(const std::vector<std::string>& arr) {
    std::regex pattern("[:;][-~]?[)D]");
    int count = 0;
    for (auto i : arr) {
        if (std::regex_match(i, pattern)) {
            count++;
        }
    }

    return count;
}