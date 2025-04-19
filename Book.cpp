#include "Book.h"

Book::Book(const string& bookTitle, const string& bookAuthor, const string& bookISBN)
    : title(bookTitle), author(bookAuthor), ISBN(bookISBN) {}

string Book::getTitle()const {
    return title;
}
string Book::getAuthor()const {
    return author ;
}

string Book::getISBN( const {
    return ISBN ;
}
