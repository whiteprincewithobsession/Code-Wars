#include <cmath>

long int findNextSquare(long int sq) {
  if(sqrt(sq) != round(sqrt(sq))) return -1;
  else return pow(round(sqrt(sq) + 1), 2);
}