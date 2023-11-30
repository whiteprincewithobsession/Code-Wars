#include <string>
using namespace std;

int last_digit(const std::string& a, const std::string& b) 
{
    int len_a = a.length(), len_b = b.length();
    if (len_a ==0 || len_b==0)
        return 0;
    if (b=="0")
        return 1;
  
    int rem_b = 0;
    for (int i=0; i<len_b; i++)
        rem_b = (rem_b*10 + (b[i] - '0')) % 4;

    int rem_a = 0;
    if (rem_b == 0) 
        rem_b += 4;
      
    for (int i=0; i<len_a; i++)
        rem_a = (rem_a*10 + (a[i]-'0')) % 10;
  
    return fmod(pow(rem_a % 10, rem_b), 10);
}