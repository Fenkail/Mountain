#include <iostream>
#include "circle_gap.cpp"
// #include "circle_gap.h"
//TODO 在讲授过程中是主函数和实现都只接入.h的声明即可，main+实现会导致重复定义。本次实践中不加实现，报无定义的错


using std::cout;
using std::endl;


int main()
{
    Circle c1;
    Circle c2 {2.0};

    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    return 0;
}