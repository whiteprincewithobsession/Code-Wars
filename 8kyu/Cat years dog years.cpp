#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int dog = 15;
  int cat = 15;
  for(int i = 2; i <= humanYears; i++){
    if(i == 2){
      cat += 9;
      dog += 9;
    }
    else{
      cat += 4;
      dog += 5;
    }
  }
  return {humanYears, cat, dog};
}