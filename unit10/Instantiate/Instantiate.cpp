#include <iostream>

template<typename T>
T max(T x, T y) {
    return x > y ? x : y;
}

template<int>
int max(int, int);

int main() {
    std::cout << max(1, 2) << std::endl;
    std::cout << max(1.1, 2.2) << std::endl;
    std::cout << max("a", "c") << std::endl;
    std::cout << max("adc", "saf") << std::endl;
}