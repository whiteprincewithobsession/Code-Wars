#include <vector>
#include <array>
#include <algorithm>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    if(ages.empty()) return {};
    std::sort(ages.begin(), ages.end());
    return {ages[ages.size() - 2], ages.back()};
}