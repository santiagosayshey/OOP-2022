#include <string>

class Person
{
    private:
        std::string name;
        int salary;
    public:
        Person(int mySalary, std::string myName);
        ~Person();

        void setName(std::string myName);
        std::string getName();
        void setSalary(int mySalary);
        int getSalary();
};