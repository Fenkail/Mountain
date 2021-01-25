#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main(){
    //1.auto 必须初始化
    auto x = 3;
    auto y {3};
    //auto z;

    //2. 同一行，同一个类型
    auto x1 {1}, x2 {2}, x3 {1};
    //auto x1 {1}, x2 {2}, x3 {1.0};

    //3. auto 对于引用或者常量回去除    但是typeid该函数返回时并不区分int&和int 
    /*   根据地址分析，y1  y2   y4 都是一个东西相当于引用， 所以y3去除了&
    &y1
    0x7fffffffda4c
    &y2
    0x7fffffffda4c
    &y3
    0x7fffffffda64
    &y4
    0x7fffffffda4c
    */
    int y1 {22}, &y2 {y1};
    auto y3 {y2};
    cout<<"开始"<< typeid(y3).name() <<endl;
    auto& y4 {y2};
    cout<<"开始"<< typeid(y4).name() <<endl;

    //4. 关于数组  s2与s同地址  相当于引用了s,修改s2 s也跟着修改
    double s[] = {1,2,3};
    auto s1 = s;
    auto& s2 = s;
    s2[1] = 5;
    s2[0] = 0;
    cout<<"开始"<< typeid(s1).name() <<endl;
    cout<<"开始"<< typeid(s2).name() <<endl;
    return 0;
}