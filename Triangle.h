#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>

class Triangle : public Shape {
public:
    Triangle(Point p1, Point p2, Point p3) : Point1(p1), Point2(p2), Point3(p3) {}
    virtual void draw();
    virtual std::string getName();

    virtual float getArea();
    virtual Point getCenter();


    Point getPoint1() { return Point1; }
    Point getPoint2() { return Point2; }
    Point getPoint3() { return Point3; }

private:
    Point Point1;
    Point Point2;
    Point Point3;

};

