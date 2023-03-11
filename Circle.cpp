#include "Circle.h"
#include <cmath>

void Circle::draw()
{
    using namespace std;
    cout << "This is a " << getName() << " with a radius of " << radius
        << " and area of " << getArea()
        << " located at point (" << center.x << ", "
        << center.y << ")" << endl;
      
}

float Circle::getArea()
{
    return 3.14 * pow(radius, 2);
}

Point Circle::getCenter()
{
    return center;
}

std::string Circle::getName()
{
    return std::string("Circle");
}