#include <vector>
#include <cmath>

bool prime2(long long n){ 
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

std::vector<unsigned> prime(unsigned n){
    if(n == 0 || n == 1) return {};
    std::vector<unsigned> res;
    for(int i = 2; i <= n; i++){
      if(prime2(i)) res.push_back(i);
    }
    return res;
  }