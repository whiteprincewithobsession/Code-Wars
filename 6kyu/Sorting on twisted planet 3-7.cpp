#include <vector>
#include <algorithm>
#include <string>

using namespace std;

std::vector<int> sortTwisted37 (std::vector<int> numbers) {
  for(int i = 0; i < numbers.size(); i++){
    std::string tmp = std::to_string(numbers[i]);
    for(int j = 0; j < tmp.length(); j++){
      if(tmp[j] == '3') tmp[j] = '7';
      else if(tmp[j] == '7') tmp[j] = '3';
    }
    numbers[i] = std::stoi(tmp);
  }
  std::sort(numbers.begin(), numbers.end());
  for(int i = 0; i < numbers.size(); i++){
    std::string tmp = std::to_string(numbers[i]);
    for(int j = 0; j < tmp.length(); j++){
      if(tmp[j] == '3') tmp[j] = '7';
      else if(tmp[j] == '7') tmp[j] = '3';
    }
    numbers[i] = std::stoi(tmp);
  }
  return numbers;
}