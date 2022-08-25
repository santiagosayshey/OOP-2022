#include <iostream>
#include <string>

using namespace std;

class publication {
    protected:
        string title;
        string author;
        int year;
    public:
        publication(string title, string author, int year):
        title(title), author(author), year(year) { }
        publication(): publication("No Title", "No Author", 0) {}
        void print() {
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Year: " << this->year << endl;
        }

};

class book: public publication {
    private:
        string publisher;
        int num_pages;
        int ISBN;
    public:
        book(string title, string author, int year, string publisher, int pages, int ISBN) : publication(title,author,year), num_pages(pages), ISBN(ISBN), publisher(publisher) {}
        book(): book("No Title", "No Author", 0, "",0,0 ) {}
        // we can 'modify' existing functions
        void print() {
            publication::print();
            cout << "publisher: " << this->publisher << endl;
            cout << "num_pages: " << this->num_pages << endl;
            cout << "ISBN: " << this->ISBN << endl;
        }
        // or we can overload them by changing the parameters (called changing the signature)
        void print(bool short_print) {
            if (short_print) {
                publication::print();
            }
            else {
            publication::print();
            cout << "publisher: " << this->publisher << endl;
            cout << "num_pages: " << this->num_pages << endl;
            cout << "ISBN: " << this->ISBN << endl;
            }
        }
};

int main() {

    book b("OOP", "Sam", 2022, "Adl UNI", 500, 12332);
    b.print(true);
    return 0;
}