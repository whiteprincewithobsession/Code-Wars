#include <string>
#include <algorithm>
#include <array>

std::string sum_strings(const std::string& a, const std::string& b) {
  std::string big, small;
  if(a.length() == 0) return b;
  if(b.length() == 0) return a;
  if(a.length() > b.length()){
    big = a; small = b;
  }
  else{
    big = b; small = a;
  }
  std::reverse(big.begin(), big.end());
  std::reverse(small.begin(), small.end());
  
  std::array<int,  1000> arr{};
  int flag = 0;
  for(int i = 0; i < small.length(); i++){
    int tmp = small[i] + big[i] - '0' * 2;
    if(tmp > 10){
      int tmp2 = tmp / 10;
      tmp = tmp % 10;
      arr[i] += tmp;
      arr[i + 1] += tmp2;
    }
    else arr[i] += tmp;
    flag = i;
  }
  for(int i = small.length(), j = 0; i < big.length(); i++, j++){
    arr[flag + j + 1] += big[i] - '0';
  }
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] >= 10){
      arr[i + 1] += arr[i] / 10;
      arr[i] = arr[i] % 10; 
    }
  }
  std::string res = "";
  for(int i = arr.size() - 1; i >= 0; i--){
    res += arr[i] + '0';
  }
  int counter = 0;
  for(int i = 0; i < res.size(); i++){
    if(res[i] > '0') break;
      counter++;
  }
  res.erase(res.begin(), res.begin() + counter);
  if(res.length() == 0) res = "0"; 
  return res;
}