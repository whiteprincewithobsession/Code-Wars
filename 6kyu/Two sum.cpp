#include <utility>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    for(int i = 0; i < numbers.size(); i++){
      for(int j = i; j < numbers.size(); j++){
        if(numbers[i] + numbers[j] == target && i != j)
          return std::make_pair(i, j);
      }
    }
}