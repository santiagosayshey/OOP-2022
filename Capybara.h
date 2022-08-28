#ifndef _CAPYBARA_H
#define _CAPYBARA_H

#include <string>

class Capybara
{
    private:
        std::string name;
        int age;
    public:
        Capybara();
        ~Capybara();

        void setName(std::string capyName);
        std::string getName();
        void setAge(int capyAge);
        int getAge();

};

#endif