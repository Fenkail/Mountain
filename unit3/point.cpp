#include <iostream>

using std::cout;
using std::endl;

int main(){

    // 常量指针
    const int x {42};
    // 常量不可变
    //  x = 12;
    // 常量指针所值数据不可变
    int y = 2;
    const int* p = &x;
    const int* q = &y;
    // *q = 12;
    // *p = 21;
    // 指针常量不可变    通过r的解引用可以对y进行赋值
    int* const r = &y;
    int z = 5;
    //r = &z;
    *r = z;
    // 常量指针常量 s不能左值
    const int* const s = &y;
    //s = &z;
    const char* str = "Hello";
    auto p1 = &y;
    auto p2 = "world";
    auto const p3 = "1";   //为了将p3定义为常量

    return 0;
}