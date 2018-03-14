/**
 * Color.cpp
 *
 * EECS 183, Winter 2018
 * Project 4: CoolPics
 *
 * Lewis Conklin, Noah Saleh
 * lewislc, nmsaleh
 *
 * The color class
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.
Color::Color() {
}

Color::Color(int redVal, int greenVal, int blueVal) {
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}

void Color::setRed(int redVal) {
    red = checkRange(redVal);
}

void Color::setGreen(int greenVal) {
    green = checkRange(greenVal);
}

void Color::setBlue(int blueVal) {
    blue = checkRange(blueVal);
}

int Color::getRed() {
    return red;
}

int Color::getGreen() {
    return green;
}

int Color::getBlue() {
    return blue;
}

void Color::read(istream& ins) {
    ins >> red;
    ins >> green;
    ins >> blue;
}

void Color::write(ostream& outs) {
    outs << red << "  " << green << "  " << blue;
}

int Color::checkRange(int val) {
    if (val >= 0 && val <= 255) {
        return val;
    }
    else {
        if (val < 0) {
            return 0;
        }
        else {
            return 255;
        }
    }
}

// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
