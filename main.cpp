#include <iostream>
#include "Book.h"
#include "Library.h"
int main() {
    Library library;
    Book book1("abc", "xyz", "97807435");
    Book book2("1984", "George O", "9780451524935");
    library.addBook(&book1);
    library.addBook(&book2);
    Book* searchedBook = library.searchBook("9780743273565");
    if (searchedBook) {
        cout << searchedBook->getTitle() << " by " << searchedBook->getAuthor() << endl;
    }
    library.removeBook("9780451524935");
    searchedBook = library.searchBook("9780451524935");
    if (!searchedBook) {
        cout << "Book removed" << endl;
    }

    return 0;
}
