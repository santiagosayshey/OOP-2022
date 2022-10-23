#include <iostream>
#include <string>

using namespace std;

class A
{
    private:
        int age;
    public:
        A() {}
        ~A() {}

        void setAge(int age)
        {
            if (age<0)
                throw ("invalid age");
            else if(age>100)
                throw string("error");
            this->age=age;
        }

};

int main()
{
    A a;

    try {a.setAge(111);}
    catch(const char*  msg) {cerr << msg << endl;}
    catch(int ecode) {cerr << ecode << endl;}
    catch(...) {cerr << "unknown error!" << endl;} // catch 
    return 0;
}