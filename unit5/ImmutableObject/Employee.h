_Pragma("Once")

#include <iostream>
#include <string>

    using std::string;
// 带作用域的枚举类型
enum class Gender
{
    male,
    female,
};

class Employee
{
private:
    string name;
    Gender gender;
    Date birthday;

public:
    void setName(string name) { this->name = name; }
    void setGender(Gender gender) { this->gender = gender; }
    void setBirthday(Date birthday) { this->birthday = birthday; }
    string getName() { return name; }
    Gender getGender() { return gender; }
    Date *getBirthday() { return &birthday; }
    string toString()
    {
        return name + "-" + (gender == Gender::male ? string("male") : string("female")) + birthday.toString();
    }
    Employee(string name, Gender gender, Date birthday) : name{name}, gender{gender}, birthday{birthday} {}
    // 委托构造
    Employee() : Employee("F", Gender::male, Date(2021, 3, 4)) {}
};