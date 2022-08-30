#include <iostream>
#include <string>

using namespace std;

class A {

    protected:
        int _s;

    public:
        A(int s): _s(s){}
        A():A(-1) {}

        // runtime polymorphism
         void print() {
            cout << "S = " << this->_s << endl;
        }

};

class B : public A {

    private:
        double _k;
    
    public:
        B(int s,double k):A(s), _k(k) {}
        B():B(0,0) {}

        // overiding the function
        void print() {
            cout << "S = " << this->_s << " K = "<< this->_k << endl;
        }

};

void test(A* a) {
    a->print();
}

int main() {
/*     
    A* a1;
    B b1(500,0.123);
    // a pointer to a base class can point to an object from a derived class
    a1 = &b1;
    // print is statically binded to the parent class
    a1->print(); */

    A a1(564);
    B b1(500,0.123);

    test(&a1);
    test(&b1);

    return 0;
}