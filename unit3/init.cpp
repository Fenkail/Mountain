#include <iostream>

using std::cout;
using std::endl;

int main(){
    // static_cast 为类型的转换
    bool a = static_cast<bool>('a');
    bool b = a ;
    //下方s1和s2并不等价，主要是s1[6]=/000  s2[6]='a' 存在区别
    char s1[] = "asdasd";
    char s2[] {'a','s','d','a','s','d'};

    // 下方三种方式，用下方第三种更为妥当，编译器报错，因为类别不符合要求
    int x1 = 1.1;
    int x2 (1.1);
    int x3 {1.1};
    
    return 0;
}