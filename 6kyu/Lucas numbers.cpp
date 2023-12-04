#include <map>

std::map<long long, long long> lucas_mem;

long long lucasnum(int n) {
    if(n == 0) return 2;
    if(n == 1) return 1;
    if(lucas_mem.count(n)) return lucas_mem[n];
    if(n > 1) lucas_mem[n] = lucasnum(n-1) + lucasnum(n-2);
    if(n < 0) lucas_mem[n] = lucasnum(n+2) - lucasnum(n+1);
    return lucas_mem[n];
}