#include "Airplane.h"

Person::Person(int mySalary, std::string myName):
name(myName),salary(mySalary) {}

Person::~Person() {}

void Person::setName(std::string myName)
{
    name = myName;
}

std::string Person::getName()
{
    return name;
}

void Person::setSalary(int mySalary)
{
    salary = mySalary;
}

int Person::getSalary() 
{
    return salary;
}