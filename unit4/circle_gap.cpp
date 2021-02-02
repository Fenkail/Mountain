#include <iostream>
#include "circle_gap.h"

using std::cout;
using std::endl;

// 类的实现
Circle::Circle(){
    r = 1.0;
}
Circle::Circle(double rr){
    r = rr;
}
double Circle::getArea(){
    return 3.14*r*r;
}
