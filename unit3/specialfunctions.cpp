#include <iostream>

using std::cout;
using std::endl;


int c = 19;
template <typename T>
auto overtest(T a){
    return a;
}
// 模板的使用，忽略了变量类型的繁琐限制
template <typename T>
auto overtest(T a,T b){
    return a > b ? a:b;
}


int main(){

    int c = 12;
    std::cout << "local variable v1 is "  << c   << std::endl;
    std::cout << "variable v1 is "  << ::c   << std::endl;
    std::to_string(c);

    cout << overtest(1,2);
    cout<< ("\n");
    cout << overtest(1);

    return 0;
}


