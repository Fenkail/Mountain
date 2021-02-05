_Pragma("once")
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

enum class Color{
    white,black,green,blue,yellow,red,
};

class Shape{
private:
    Color color {Color::black};
    bool filled {false};
public:
    Shape() = default;
    Shape(Color color, bool filled){
        this->color = color;
        this->filled = filled;
    }

    Color getColor() {return color;}
    void setColor(Color color){
        this->color = color;
    }
    bool isFilled(){return filled;}
    void setFilled(bool filled){
        this->filled = filled;
    }
    
    string toString(){
        vector<string> c{"white","black","green","blue","yellow","red",};
        return "Shape: " + c[static_cast<int>(color)] + " " + (filled? "filled":"not filled");
    }
};