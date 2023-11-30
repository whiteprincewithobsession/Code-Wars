int solution(int number) 
{
  int res = 0;
  if(number < 0) return 0;
  for(int i = 1; i < number; i++){
    if(i % 3 == 0 || i % 5 == 0){
      res += i;
    }
  }
  return res;
}