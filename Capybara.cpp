#include "Capybara.h"
#include <string>

Capybara::Capybara() {}
Capybara::~Capybara() {}

void Capybara::setName(std::string capyName)
    {
        name = capyName;
    }

std::string Capybara::getName()
    {
        return name;
    }
void Capybara::setAge(int capyAge)
    {
        age = capyAge;
    }    
int Capybara::getAge()
    {
        return age;
    }

