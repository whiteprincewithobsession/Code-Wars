#include <string>
#define MAX 1000

int multiply(int x, int** res, int res_size);

std::string factorial(int n){
  int* res = new int[1000];
    res[0] = 1;
    int res_size = 1;
    std::string s = "";
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, &res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        s += res[i] + '0';
  return s;
}
 

 
int multiply(int x, int** res, int res_size)
{
    int carry = 0; 
 
    for (int i = 0; i < res_size; i++) {
        int prod = (*res)[i] * x + carry;
 
        (*res)[i] = prod % 10;
 
        carry = prod / 10;
    }
 
    while (carry) {
        (*res)[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}