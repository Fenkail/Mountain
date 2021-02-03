#include <iostream>
#include "circle_gap.cpp"
// #include "circle_gap.h"
//TODO 在讲授过程中是主函数和实现都只接入.h的声明即可，main+实现会导致重复定义。本次实践中不加实现，报无定义的错

using std::cout;
using std::endl;

int main()
{
    //堆区分配的对象,auto加不加星号都差不多
    auto *c1 = new Circle{1.0};
    Circle c3{2.0};
    auto c2 = &c3;
    // c1和c2是对象指针，所以->;使用*进行解引用后，可以直接使用‘.’   '.'优先级高于*，所以加括号
    cout << c1->getArea() << endl;
    cout << c2->getArea() << endl;
    cout << (*c1).getArea() << endl;

    auto c5 = new Circle[3]{1.1, 2.2, 3.3};
    for (int i = 0; i < 3; i++)
    {
        cout << c5[i].getArea() << endl;
    }
    // c5是circle的指针，无法基于范围的for循环
    // for (auto x :c5){
    //     cout << x.getArea
    // }
    delete c1;
    delete [] c5;
    c1 = c5 = nullptr;
    return 0;
}