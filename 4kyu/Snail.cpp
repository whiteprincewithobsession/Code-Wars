#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    std::vector<int> vec;
    int k = 0;
    int m = snail_map.size();
    int n = snail_map[0].size();

    while (k < m && k < n) {
        for (int j = k; j < n - k; j++) {
            vec.push_back(snail_map[k][j]);
        }
        for (int i = k + 1; i < m - k; i++) {
            vec.push_back(snail_map[i][n - 1 - k]);
        }
        if ((m - 1 - k) != k) {
            for (int j = n - 2 - k; j >= k; j--) {
                vec.push_back(snail_map[m - 1 - k][j]);
            }
        }
        if (k != n - 1 - k) {
            for (int i = m - 2 - k; i > k; i--) {
                vec.push_back(snail_map[i][k]);
            }
        }

        k++;
    }
  return vec;
  }