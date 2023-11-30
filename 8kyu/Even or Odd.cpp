#include <string>

std::string even_or_odd(int number) 
{
  return (number % 2) * (number % 2) == 1 ? "Odd" : "Even";
}