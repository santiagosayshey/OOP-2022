#include <string>

class Book
{
public:
    Book(std::string name, int total);
    ~Book();

    int get_total();
    std::string get_name();

    void set_total(int newTotal);
    void set_name(std::string newName);

private:
    std::string name;
    int total;
};

