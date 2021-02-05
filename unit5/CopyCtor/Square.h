_Pragma("Once")

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Square
{
private:
    double side{1.0};
    static int numberOfObjects;

public:
    double getSide() { return side; }
    void setSide(double side) { this->side = side; }
    Square(double side)
    {
        this->side = side;
        numberOfObjects++;
    }
    Square(): Square(1.0){}
    Square(const Square& s){
        this->side = s.side;
        numberOfObjects++ ;
        cout << "Square is invoked" << endl;
    }
    double getArea() {return side*side;}
    static int getnumberOfObjects() {return numberOfObjects;}
    int getnumberOfObjectsStatic() {return numberOfObjects;}
};