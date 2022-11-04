/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Finn Ward
 * finnward
 *
 * color.cpp Project 4
 */

#include "Color.h"
Color::Color() {
}
Color::Color(int redVal, int greenVal, int blueVal){
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}

void Color::setRed(int redVal) {
    red = checkRange(red);
}
void Color::setGreen(int greenVal) {
    green = checkRange(red);
}
void Color::setBlue(int blueVal) {
    blue = checkRange(blue);
}
int Color::getRed(){
    return red;
}
int Color::getGreen(){
    return green;
}
int Color::getBlue(){
    return blue;
}
void Color::read(istream& ins){
    int redc, greenc, bluec;
    ins >> redc >> greenc >> bluec;
    setRed(redc);
    setGreen(greenc);
    setBlue(bluec);
}
void Color::write(ostream& outs){
    outs << red << " " << green << " " << blue;
}
int Color::checkRange(int x){
    if(x >= 0 && x <= 255){
        return x;
    } else{
        if(x < 0) {
            return 0;
        } else{
            return 255;
        }
    }
}
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
