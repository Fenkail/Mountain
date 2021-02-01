#include <iostream>

using std::cout;
using std::endl;

int i = 1;

int main()
{

    int a[] = {2, 1, 4, 3, 5};

    for (auto &i : a)
    {
        // 引用 修改集合的值
        i = 2 * i;
        std::cout << i << std::endl;
    }

    for (auto i : a)
    {
        // const 避免修改集合的值
        i = 2 * i;
        std::cout << i << std::endl;
    }
}