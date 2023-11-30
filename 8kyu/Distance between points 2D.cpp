#include <cmath>

struct Point{
    double x;
    double y;
};

double distance_between_two_points(const Point& a, const Point& b) {
    return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}