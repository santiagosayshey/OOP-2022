#include <string>

class Person
{
    private:
        std::string name;
        int salary;
    public:
        Person(int mySalary, std::string myName):
        name(myName),salary(mySalary) {};
        ~Person() {};

        void set_name(std::string myName)
        {
            name = myName;
        }

        std::string getName()
        {
            return name;
        }

        void setSalary(int mySalary)
        {
            salary = mySalary;
        }

        int getSalary() 
        {
            return salary;
        }
};