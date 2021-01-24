#include <iostream>

int main(){
    int* p = nullptr;
    // q为c++11的初始化方式
    int* q {nullptr};

    p = new int(42);
    q = new int[4];
    
    std::cout<< "Before *p= " <<*p << std::endl;
    *p = 24;
    std::cout<< "After *p= " <<*p << std::endl;

    for (int i = 0; i < 4; i++){
        std::cout << *(q+i) << std::endl; 
        // 下方等价于上述，不存在*q[i]的情况，本身q是一个数组形式
        std::cout << q[i] << std::endl; 
    }
    // 归还数组类型
    delete []q;
    delete p;

    return 0;
}