//
//  test.cpp
//  Project 6
//
//  Created by Noah Saleh on 3/12/18.
//  Copyright © 2018 Noah Saleh. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Point.h"
#include "Color.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

int main() {
    cout << "Testing Point.cpp" << endl;
    Point pt1;
    Point pt2(4, 4000);

    pt1.setX(2);
    pt1.setY(1);

    cout << "(" << pt1.getX() << ", " << pt1.getY() << ")" << endl;

    pt1.read(cin);
    cout << pt1 << endl;


    cout << "Testing Color.cpp" << endl;
    Color color1;
    Color color2(255, 0, 64);

    color1.setRed(34);
    color1.setGreen(-140);
    color1.setBlue(4000);

    cout << color1.getRed() << color1.getGreen() << color1.getBlue() << endl;
    cin >> color1;
    cout << color1 << endl;


    cout << "Testing Line.cpp" << endl;
    Line ln1;
    Line ln2(pt1, pt2, color1);
    cout << ln1 << endl;
    cout << ln2 << endl;

    ln1.setStart(pt1);
    ln1.setEnd(pt2);
    ln1.setColor(color1);

    cout << ln1.getStart() << " " << ln1.getEnd() << " " << ln1.getColor()
        << endl;

    ln1.read(cin);
    cout << ln1 << endl;


    cout << "Testing Circle.cpp" << endl;
    Point center(5, 8);
    int r = 4;
    Circle c1;
    Circle c2(center, r, color1);
    Circle c3(center, -6, color1);
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;

    c1.setCenter(center);
    c1.setRadius(2);
    c1.setRadius(-3);
    c1.setColor(color1);

    cout << c1.getCenter() << " " << c1.getRadius() << " " << c1.getColor()
        << endl;

    c1.read(cin);
    cout << c1 << endl;


    cout << "Testing Triangle.cpp" << endl;
    Point v1(0,2);
    Point v2(5, 8);
    Point v3(12, 2);
    Color color3(0, 0, 255);

    Triangle t1;
    Triangle t2(v1, v2, v3, color1);
    Triangle t3(v1, color1, v2, color2, v3, color3);
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;

    t1.setVertexOne(v1);
    t1.setVertexTwo(v2);
    t1.setVertexThree(v3);
    t1.setVertexOneColor(color3);
    t1.setVertexTwoColor(color2);
    t1.setVertexThreeColor(color1);

    cout << t1.getVertexOne() << " " << t1.getVertexOneColor() << " "
        << t1.getVertexTwo() << " " << t1.getVertexTwoColor() << " "
        << t1.getVertexThree() << " " << t1.getVertexThreeColor() << endl;

    t1.read(cin);
    cout << t1 << endl;


    cout << "Testing Rectangle.cpp" << endl;
    Point pt3(-2, 3);
    Point pt4(-400, 1);
    Color color4(200, 130, 50);
    Rectangle rectangle1;
    Rectangle rectangle2(pt1, pt2, color1);
    Rectangle rectangle3(pt1, pt2, color1, color2, color3, color4);
    cout << rectangle1 << endl;
    cout << rectangle2 << endl;
    cout << rectangle3 << endl;

    rectangle1.setStart(pt3);
    rectangle1.setEnd(pt4);
    rectangle1.setColor(color2);
    rectangle2.setColor(color4);
    rectangle1.setColorTopLeft(color1);
    rectangle1.setColorTopRight(color2);
    rectangle1.setColorBottomRight(color3);
    rectangle1.setColorBottomLeft(color4);

    cout << rectangle1.getStart() << rectangle1.getEnd()
        << rectangle1.getColorTopLeft() << rectangle1.getColorBottomRight()
        << rectangle1.getColorBottomLeft() << rectangle1.getColorTopRight();

    cin >> rectangle1;
    cout << rectangle1 << endl;
    cout << rectangle2 << endl;

    return 0;
}
