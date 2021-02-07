#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;
using std::vector;


int main() {
//    设置4位宽度,fill需要单引号
    cout << std::setw(4) << std::setfill('$') << "q" << endl;
    cout << std::setfill('#');
    for (int i = 0; i < 5; i++) {
        cout << std::setw(i + 2) << " " << endl;
    }
    double pi = 3.14159265358979;
//    有效数字6位
    cout << std::setprecision(6) << pi << endl;
//    小数点后六位
    cout << std::setprecision(6) << std::fixed << pi << endl;

    double y = 3.0;
    cout << std::hexfloat << y << endl;
    cout << std::defaultfloat ;
    cout << y << endl;
    cout << std::showpoint << y << endl;

}