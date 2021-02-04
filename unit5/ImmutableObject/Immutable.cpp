#include <iostream>

#include "Data.h"
#include "Employee.h"

using std::cout;
using std::endl;
using std::string;

int main(){
    Employee e;
    // 1.setter
    e.setBirthday(Date(1000,12,1));
    cout << e.toString() << endl;
    // 2.getter
    e.getBirthday()->setYear(1998);
    cout << e.toString() << endl;
    
    return 0;
}