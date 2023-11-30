int gcd(int x, int y)
{
    return y ? gcd(y,x%y) : x;
}

int eulersTotientFunction (int n){
  int counter = 0;
  for(int i = 0; i < n; i++){
    if(gcd(n, i) == 1) counter++;
  }
  return counter;
  // your code here ...
}
