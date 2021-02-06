#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"
#include "Circle.cpp"
#include "Rectangle.cpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    Shape s1{Color::blue, false};
    Circle c1{2.3};
    Rectangle r1{2.2, 3.4};
    
    cout << s1.toString() << endl;
    cout << c1.toString() << endl;
    cout << r1.toString() << endl;
}