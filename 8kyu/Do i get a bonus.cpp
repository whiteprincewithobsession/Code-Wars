#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    return "$" + std::to_string(bonus == true ? salary * 10 : salary); 
}