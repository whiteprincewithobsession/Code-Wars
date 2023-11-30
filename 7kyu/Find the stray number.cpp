#include <vector>

int stray(std::vector<int> numbers) {
    int res = 0;
    for(int i = 0; i < numbers.size(); i++){
      res ^= numbers[i];
    }
    return res;
};