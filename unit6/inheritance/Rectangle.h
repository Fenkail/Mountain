_Pragma("once")
#include <iostream>
#include <string>
#include "Shape.h"
#include <vector>

    using std::cout;
using std::endl;
using std::string;
using std::vector;

class Rectangle : public Shape
{
private:
    double width{1.0};
    double height{1.2};

public:
    Rectangle() = default;
    Rectangle(double w, double h);

    double getW() const;
    void setW(double w);
    double getH() const;
    void setH(double h);

    double getArea() const;
};