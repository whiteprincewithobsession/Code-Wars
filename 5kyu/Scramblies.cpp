#include <iostream>
#include <unordered_map>

bool scramble(const std::string& str1, const std::string& str2) {
    std::unordered_map<char, int> count_str1;
    for (char ch : str1) {
        count_str1[ch]++;
    }
    std::unordered_map<char, int> count_str2;
    for (char ch : str2) {
        count_str2[ch]++;
    }   
    for (const auto& entry : count_str2) {
        char ch = entry.first;
        int count = entry.second;

        if (count_str1[ch] < count) {
            return false;
        }
    }

    return true;
}