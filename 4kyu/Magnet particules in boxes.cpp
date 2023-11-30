#include <cmath>

class Magnets
{
public:
    static double doubles(int maxk, int maxn){
      double s1 = 0, s2 = 0;
      for(int k = 1; k <= maxk; k++){
        s1 = 0;
        for(int n = 1; n <= maxn; n++){
          s1 += 1 / (k * pow((n + 1), 2 * k));
        }
        s2 += s1;
      }
      return s2;
    }
};