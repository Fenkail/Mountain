#include <iostream>
#include "circle.cpp"

using std::cout;
using std::endl;

int main()
{
    Circle ca1[]{Circle{1.1}, Circle{2.1}, Circle{3.1}};
    Circle ca2[]{10.0, 11.0, 12.2};
    ca1[2].setR(4.3);
    ca2[0].setR(4.1);

    auto area1 {0.0};
    auto area2 {0.0};

    for (int i = 0; i <  sizeof(ca1) / sizeof(ca1[0]); i++)
    {
        cout << ca1[i].getArea() << endl;
        area1 += ca1[i].getArea();
    }
    for (auto x: ca2){
        cout << x.getArea() << endl;
        area2 += x.getArea();
    }
    cout << area1 << "\t" << area2 << endl;
    return 0;
}