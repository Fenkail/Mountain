#include <iostream>

template <class T, typename Q>
T add(T x, Q y){
    return (x+y);
}
int main() {
//    x和y必须同类型,所以构建Q进行解决
    std::cout << add(3.1,2) << std::endl;
}