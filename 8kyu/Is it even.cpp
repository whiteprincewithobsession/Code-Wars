#include <cmath>

bool is_even(double n)
{
    if(std::ceil(n) != n) return false;
    return !(static_cast<int>(n) % 2);
}