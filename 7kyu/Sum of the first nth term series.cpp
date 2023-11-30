#include <cmath>
#include <string>

std::string seriesSum(int n)
{
    if(n == 0) return "0.00";
    double s = 1;
    for(double i = 1; i < n; i++){
      s += 1 / (i * 3 + 1);
    }
    auto str = std::to_string(round(s*100)/100);
    return str.substr(0, 4); 
}