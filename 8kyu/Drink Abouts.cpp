#include <string>

std::string people_with_age_drink(int age) {
  return age >= 21 ? "drink whisky" : age >= 18 ? "drink beer" : age >= 14 ? "drink coke" : "drink toddy";
}