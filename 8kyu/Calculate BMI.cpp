#include <string>

std::string bmi(double w, double h) 
{
    return  w / h / h <= 18.5 ? "Underweight" : w / h / h <= 25.0 ? "Normal" :
    w / h / h <= 30.0 ? "Overweight" : "Obese";
}