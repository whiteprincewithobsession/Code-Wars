#include <vector>
#include <string>

std::vector<std::string> coin_flips(int flips) {
    std::vector<std::string> combinations;
    for (int i = 0; i < (1 << flips); ++i) {
        std::string current_combination;
        for (int j = flips - 1; j >= 0; --j) {
            current_combination += ((i >> j) & 1) ? "T" : "H";
        }
        combinations.push_back(current_combination);
    }

    return combinations;
}