// 保证头文件只编译一次
_Pragma("once")
#include "Shape.h"
//类的声明
class Circle:public Shape
{
    double r;
public:
    Circle();
    Circle(double rr);
    double getArea();
    double getR() const;
    void setR(double r);

};