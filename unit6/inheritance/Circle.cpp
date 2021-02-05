#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

Circle::Circle()
{
    r = 1.0;
}

Circle::Circle(double rr)
{
    r = rr;
}
double Circle::getArea()
{
    return 3.14 * r * r;
}
double Circle::getR() const{
    return r;
}
void Circle::setR(double r){
    this->r = r;
}