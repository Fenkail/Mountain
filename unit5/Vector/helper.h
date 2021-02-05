_Pragma("Once")

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

#define PRINT(x) cout << #x << ":" << x << endl;


template<typename T>
std::ostream& operator << (std::ostream& s, const std::vector<T>& v){
    s.put('[');
    char comma [3] = {'\0',' ','\0'};
    for (const auto& e: v){
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}