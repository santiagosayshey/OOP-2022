#include <string>

class Capybara
{
    private:
        std::string name;
        int age;
    public:
        Capybara() {};
        ~Capybara() {};

        void set_name(std::string capyName)
        {
            name = capyName;
        }

        std::string getName()
        {
            return name;
        }

        void setAge(int capyAge)
        {
            age = capyAge;
        }

        int getAge() 
        {
            return age;
        }
};