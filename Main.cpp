// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "MultiShape.h"
#include "Circle.h"
#include "Shape.h"



int main() {
    Point p = { 5,2 };
    Point c1 = { 6,8 };
    Point p1(2, 3);
    Point p2(-3,-1);
    Point p3(2, -1);

    

    using namespace std;

    cout << "Welcome To Shape Drawing \n \n";



    Rectangle r = { p, 5, 4 };
    Square s = { p, 5 };
    Circle c = { c1, 6 };
    Triangle t(p1, p2, p3);

    MultiShape m;

    m << t;
    m << s;
    m = m + r;
    m.draw();
   

    m >> s;
    m >> t;
    m.draw();
 



}