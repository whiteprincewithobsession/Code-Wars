using ull = unsigned long long;

#include <iostream>
#include <vector>

ull exp_sum(unsigned int n) {
    std::vector<ull> partitions(n + 1, 0);
    partitions[0] = 1; // There is one way to partition 0

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            partitions[j] += partitions[j - i];
        }
    }

    return partitions[n];
}