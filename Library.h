#include <string>
#include "Book.h"

class Library
{
public:
    Library();
    ~Library();

    void addBook(std::string name, int total, std::string b);

    bool borrowBook(Book book);
    bool returnBook(Book book);


private:
    
};
