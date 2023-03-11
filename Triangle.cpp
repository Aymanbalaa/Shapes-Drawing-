#include "Triangle.h"
#include <cmath>

void Triangle::draw()
{
    using namespace std;
    cout << "This is a " << getName() << " with a point 1 <" << Point1.x << "," << Point1.y
        << " > with a point 2 < " << Point2.x << "," << Point2.y
        << " >with a point 3 <" << Point3.x << "," << Point3.y<< ">"
        << " and has an area of " << getArea() << endl;
   

}

std::string Triangle::getName()
{
    return std::string("Triangle");
}


float Triangle::getArea()
{

   

    float a = sqrt(pow(Point2.x - Point1.x, 2) + pow(Point2.y - Point1.y, 2));
    float b = sqrt(pow(Point3.x - Point2.x, 2) + pow(Point3.y - Point2.y, 2));
    float c = sqrt(pow(Point3.x - Point1.x, 2) + pow(Point3.y - Point1.y, 2));
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
    
    }

Point Triangle::getCenter()
{
    return Point((Point1.x + Point2.x + Point3.x) / 3.0, (Point1.y + Point2.y + Point3.y) / 3.0);
}

