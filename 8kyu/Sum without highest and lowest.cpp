#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
  if(numbers.empty()) return {};
  if(numbers.size() == 1) return 0;
  int min = numbers[0];
  int max = numbers[0];
  int s = 0;
  for(int i = 0; i < numbers.size(); i++){
    s += numbers[i];
    if(min > numbers[i]) min = numbers[i];
    if(max < numbers[i]) max = numbers[i];
  }
  return s - min - max;
    