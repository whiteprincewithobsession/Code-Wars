#include <string>
#include <vector>

int solve(const std::string& str) {
    std::vector<int> values;
    int currentVal = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            values.push_back(currentVal);
            currentVal = 0;
        }
        else {
            currentVal += c - 'a' + 1;
        }
    }
    values.push_back(currentVal);
    return *std::max_element(values.begin(), values.end());
}