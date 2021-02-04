
#include <iostream>
#include <string>
#include "Square.h"

using std::cout;
using std::endl;
using std::string;

int Square::numberOfObjects {10};
int main(){
    Square s1;
    cout << s1.getnumberOfObjects() << endl;
    Square s2 {20.0};
    cout << Square::getnumberOfObjects() << endl;
    cout << s2.getnumberOfObjectsStatic() << endl;
    // 非静态成员，无法直接使用类名去调用。使用变量都是可以的
    // cout << Square::getnumberOfObjectsStatic() << endl;

    return 0;
}