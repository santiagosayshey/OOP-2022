#include "Library.h"
#include <iostream>

Library::Library()
{

}

Library::~Library()
{

}

void Library::addBook(std::string name, int total, std::string b){
    Book b(name,total);
    std::cout << "You succesfully added " << name << std::endl;
}   

bool Library::borrowBook(Book book){
    
    if (book.get_total()>0) {
        std::cout << "You succesfully checked out " << book.get_name() << std::endl;
        book.set_total(book.get_total()-1);
        return 1;
    }
    else {
        std::cout << "There are no copies of " << book.get_name() << std::endl;\
        return 0;
    }
}

bool Library::returnBook(Book book){

    if (book.get_total()>0) {
        std::cout << "You succesfully checked out " << book.get_name() << std::endl;
        book.set_total(book.get_total()+1);
        return 1;
    }
    else {
        std::cout << "There are no copies of " << book.get_name() << std::endl;\
        return 0;
    }
}

