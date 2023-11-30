#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<int> solve(std::vector<int> arr) {
    std::unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }
    std::sort(arr.begin(), arr.end(), [&](int a, int b) {
        if (countMap[a] != countMap[b]) {
            return countMap[a] > countMap[b];
        }
        return a < b;
    });
    return arr;
}