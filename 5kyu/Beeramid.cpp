int beeramid(int bonus, double price)
{
  if(bonus < price) return 0; 
  int count = bonus / price;
  int level = 0;
  for(int i = 1; ; i++){
    if(count - i * i >= 0){
      count -= i * i;
       level++;
    }
    else break;
  }
  return level;
}