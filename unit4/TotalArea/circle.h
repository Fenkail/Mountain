// 保证头文件只编译一次
_Pragma("once")
//类的声明
class Circle
{
public:
    double r;
    Circle();
    Circle(double rr);
    double getArea();
    double getR() const;
    void setR(double r);

};