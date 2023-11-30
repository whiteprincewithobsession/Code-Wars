#include <string>
#include <algorithm>

int convert(int num){
  if(num > 9){
    return num - 10 + 'A';
  }
  return num + '0';
}

std::string rgb_to_hex(int r, int g, int b)
{
  auto r1 = r, g1 = g, b1 = b; 
  int tmp = 0;
  std::string res = "", temp = "";
  while(r1 != 0){
    res += convert(r1 % 16);
    r1 /= 16;
  }
  if(r < 16) res += "0";
  std::reverse(res.begin(), res.end());
  if(r >= 255) res = "FF";
  if(r <= 0) res = "00";
  while(g1 != 0){
    temp += convert(g1 % 16);
    g1 /= 16;
  }
  if(g < 16) temp += "0";
  if(g >= 255) temp = "FF";
  if(g <= 0) temp = "00";
  std::reverse(temp.begin(), temp.end());
  res += temp; temp = "";
  while(b1 != 0){
    temp += convert(b1 % 16);
    b1 /= 16;
  }
  if(b < 16) temp += "0";
  if(b >= 255) temp = "FF";
  if(b <= 0) temp = "00";
  std::reverse(temp.begin(), temp.end());
  res += temp;
  return res;
}