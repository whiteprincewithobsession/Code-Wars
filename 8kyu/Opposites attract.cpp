bool lovefunc(int f1, int f2) {
  return (f1 % 2 == 1 && f2 % 2 == 0) || (f2 % 2 == 1 && f1 % 2 == 0) ? true : false;
}
