#include "Library.h"

Library::Library() : bookCount(0) {}

void Library::addBook(Book* book) {
    if (bookCount < 10) {
        collection[bookCount++] = book;
    }
}

void Library::removeBook(const string& ISBN) {
    for (int i = 0; i < bookCount; ++i) {
        if (collection[i]->getISBN() == ISBN) {
            for (int j = i; j < bookCount - 1; ++j) {
                collection[j] = collection[j + 1];
            }
            --bookCount;
            break;
        }
    }
}

Book* Library::searchBook(const string& ISBN) {
    for (int i=0; i<bookCount;++i) {
        if (collection[i]->getISBN() == ISBN) {
            return collection[i]
          }
    }
    return nullptr;
}
