//
//  test.cpp
//  Project 6
//
//  Created by Noah Saleh on 3/12/18.
//  Copyright © 2018 Noah Saleh. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

int main() {
    // testing Point.cpp
    Point pt1;
    Point pt2(4, 8);
    
    pt1.setX(2);
    pt1.setY(1);
    
    cout << "(" << pt1.getX() << ", " << pt1.getY() << ")" << endl;
    
    pt1.read(cin);
    cout << pt1 << endl;
    
    
    // testing Line.cpp
    Line ln1;
    Color color;
    Line ln2(pt1, pt2, color);
    
    ln1.setStart(pt1);
    ln1.setEnd(pt2);
    ln1.setColor(color);
    
    cout << ln1.getStart() << " " << ln1.getEnd() << " " << ln1.getColor()
    << endl;
    
    ln1.read(cin);
    cout << ln1 << endl;
    
    
    // testing Circle.cpp
    Point center(5, 8);
    int r = 4;
    Circle c1;
    Circle c2(center, r, color);
    
    c1.setCenter(center);
    c1.setRadius(2);
    c1.setColor(color);
    
    cout << c1.getCenter() << " " << c1.getRadius() << " " << c1.getColor()
    << endl;
    
    c1.read(cin);
    cout << c1 << endl;
    
    
    // testing Triangle.cpp
    Point v1;
    Point v2(5, 8);
    Point v3(12, 2);
    Color color1(255, 0, 0);
    Color color2(0, 255, 0);
    Color color3(0, 0, 255);
    
    Triangle t1;
    Triangle t2(v1, v2, v3, color);
    Triangle t3(v1, color1, v2, color2, v3, color3);
    
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
}





