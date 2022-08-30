#include <iostream>

using namespace std;

class Point {
    private:
        int* _x;
        int* _y;
    public:
        Point() {
            _x = new int;
            _y = new int;
            *_x = 0;
            *_y = 0;
        }

        // new copy constructor to fix dynamic arrays
        Point (const Point &pnt) {
            _x = new int;
            _y = new int;
            *_x = *(pnt._x);
            *_y = *(pnt._y);
        }
        // neeeded to copy over
        void operator=(const Point &pnt) {
            *_x = *(pnt._x);
            *_y = *(pnt._y);
        }

        void print() {cout << *_x << ", " << *_y << endl;}
        // need virtual 
        virtual void set_point(int x, int y) {*_x=x; *_y=y;}

        // default destructor . added virtual to use new overriden destructors
        virtual ~Point() {
            delete _x;
            delete _y;
            cout << "_x and _y were deleted\n";
        }
};

class Point3D : public Point{
    private:
        int* _z;
    public:
        Point3D():Point() {
            _z = new int;
        }
        void set_point(int x, int y, int z) {
            Point::set_point(x,y);
            *_z = z;
        }
        // virtual destructor
        ~Point3D() {
            delete _z;
            cout << "_z was deleted\n";
        }
};


int main() {


    Point* p = new Point3D;

    // this uses default destuctor because destructor is not virtual
    delete p;
    //p->set_point(10,10,10);

    return 0;
}