#include <iostream>

using std::cout;
using std::endl;

void swap1(int a,int b){
    //形参传递，结果并不会交换实际a与b的值
    int c;
    c = a;
    a = b;
    b = c;
}

void swap2(int& a, int& b){
    //引用进行交换，其实改变了a与b的值，类似于python的感觉
    int c = a;
    a = b;
    b = c;
}

void swap3(int* a, int* b){
    //通过指针进行传递
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a=2, b=3;
    cout<<"Before a="<< a << "  b=" << b << endl;
    //swap2(a,b);
    swap3(&a, &b);
    cout<<"After a="<< a << "  b=" << b << endl;
    return 0;
}

