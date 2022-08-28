#include "Book.h"

Book::Book(std::string name, int total):
name(name),total(total)
{
}

Book::~Book()
{

}

int Book::get_total() {
    return total;
}
std::string Book::get_name() {
    return name;
}

void Book::set_total(int newTotal) {
    total = newTotal;
}
void Book::set_name(std::string newName) {
   name = newName;
}