unsigned int hotpo(unsigned int n){
    int count = 0;
    while(n > 1){
      if(n % 2 == 1) n = n * 3 + 1;
      else n /= 2;
      count++;
    }
    return count;
}