#include <iostream>
class Wagon
{
    private:
        int space=4;
    public:
        Wagon() {};
        ~Wagon() {};

        bool addCapybara(Capybara newCapy)
        {
            if (space>0) {
                space -= 1;
                std::cout << "Added capybara" << std::endl;
                return 1;
            }
            else {
                std::cout << "No space left" << std::endl;
                return 0;
            }
        }

        void emptyWagon()
        {

        }

        void printCapybaras()
        {

        }
};