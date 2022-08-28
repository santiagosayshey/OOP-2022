#include <string>

class Library
{
public:
    Library();
    ~Library();

    bool borrow_book(std::string book);
    int return_book(std::string book);

private:
    Book b

};
