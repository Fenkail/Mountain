#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
//    GCC的libstdc++默认是保证C++的cin与C的stdin同步的,false之后才能看到缓冲区的内容
    cin.sync_with_stdio(false);
    // 拿到cin对象的缓冲区指针
    auto p = cin.rdbuf();
//    从键盘读取字符，保存到缓冲区
    auto x = cin.peek();
    cout << "x = " << x << endl;
//    显示缓冲区字符数量
    auto count = p->in_avail();

    cout << "There are " << count << " char in the buffer" << endl;

    for (int i = 0; i < count; i++) {
        cout << i+ 1 << ":" << cin.get() << endl;
    }
    return 0;
}