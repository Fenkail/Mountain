#include <iostream>

using std::cout;
using std::endl;

class Circle
{
public:
    double r;

    Circle()
    {
        r = 1.0;
    }

    Circle(double rr)
    {
        r = rr;
    }
    double getArea()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Circle c1;
    Circle c2 {2.0};

    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    return 0;
}