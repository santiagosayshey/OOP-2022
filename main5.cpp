#include <iostream>

using namespace std;

class Printable
{
    public:
        virtual void print() = 0; // this is a pure abstract class because it has no data members
}; 

struct Point
{
    double x;
    double y;
};
class Shape
{
    protected:
        Point centre;
    public:
        Shape(double x, double y)
        {
            this->centre.x = x;
            this->centre.y = y;
        }

        Shape():Shape(0,0) {} 
        virtual double get_area() = 0; // In C++, we create an abstract class making one the virtual functions, pure. (does not have a definition)

};

class Square: public Shape
{
    private:
        double side;
    public:
        Square(double x, double y, double side):Shape(x,y), side(side) {}
        Square():Shape(), side(0) {}
        
        double get_area()
        {
            return side*side;
        }
};

class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(double x, double y, double radius):Shape(x,x), radius(radius) {}
        Circle():Shape(), radius(0) {}
        
        double get_area()
        {
            return 3.14*radius*radius;
        }
};

void test(Shape* shape)
{
    cout <<"The area is: " << shape->get_area() << endl;
}

int main() 
{
    Shape* s;
    s = new Square(10,10,5);

    Shape* d;
    d = new Circle(10,10,10);

    test(d);
    test(s);

    return 0;
}