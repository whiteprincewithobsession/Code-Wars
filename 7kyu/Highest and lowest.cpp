#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string highAndLow(const std::string& numbers) {
    std::stringstream ss(numbers);
    int num;
    std::vector<int> num_list;
    while (ss >> num) {
        num_list.push_back(num);
    }
    auto highest = std::max_element(num_list.begin(), num_list.end());
    auto lowest = std::min_element(num_list.begin(), num_list.end());
    std::string result = std::to_string(*highest) + " " + std::to_string(*lowest);
    return result;
}