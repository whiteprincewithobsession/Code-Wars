char getGrade(int a, int b, int c) {
  double res = (a + b + c) / 3;
  return res >= 90 ? 'A' : res >= 80 ? 'B' : res >= 70 ? 'C' : res >= 60 ? 'D' : 'F';
}