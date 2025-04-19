#include "Book.h"

class Library {
private:
    Book* collection[10]; 
    int bookCount;
public:
    Library();
    void addBook(Book* book);
    void removeBook(const string& ISBN);
    Book* searchBook(const string& ISBN);
};
