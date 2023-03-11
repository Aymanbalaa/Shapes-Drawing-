#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>

class Circle : public Shape {
public:
    Circle(Point c, int r) : center(c), radius(r) {}
    virtual void draw();
    virtual float getArea();
    virtual Point getCenter();
    virtual std::string getName();

    int getRadius() { return radius; }
    Point getCenterPoint() { return center; }

private:
    Point center;
    int radius;
};

