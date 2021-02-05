
#include <iostream>
#include <string>
# include "Square.h"

using std::cout;
using std::endl;
using std::string;

int Square::numberOfObjects = 0;
int main(){
    Square s1{10.1};
    // 拷贝构造
    Square s2 {s1};
    //  没输出invoked
    Square* s3 = new Square{s1};
    cout << s3->getArea() << endl;
    delete s3;
    return 0;
}


