class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p){
    int year = 0;
    while(p0 < p){
      p0 += percent / 100 * p0 + aug;
      year++;
    }
    return year;
  }
};