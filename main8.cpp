using namespace std;
#include <iostream>

class Student
{
    private:
        int id;
        static int count;
        
    public:
        

        Student()
        {
            id = Student::count++; // increment each time a student is created because count is static
        }

        int getID()
        {
            return id;
        }

        static int getCount() // must return a static int, cant return a regular int, ie id
        {
            return Student::count;
        }
};

int Student::count = 1000; // has to be defined outside the class

int main()
{
    Student s[100];

    for (int i = 0; i < 100; i++)
    {
        cout << s[i].getID() << endl;
    }
    

    return 0;
}