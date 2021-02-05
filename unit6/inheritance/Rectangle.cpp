#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width{w}, height{h} {}

double Rectangle::getW() const { return width; }
void Rectangle::setW(double w) {width = w;}
double Rectangle::getH() const { return height; }
void Rectangle::setH(double h) {height = h;}

double Rectangle::getArea() const{
    return width * height;
}