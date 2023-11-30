int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
    int d = 0; int h = 0;
    while(h < desiredHeight){
      h += upSpeed;
      d++;
      if(h >= desiredHeight) break;
      h -= downSpeed;
    }
    return d;
}