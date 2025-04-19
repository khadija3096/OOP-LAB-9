#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    Book(const string& bookTitle, const string& bookAuthor, const string& bookISBN);
    string getTitle()const;
    string getAuthor()const;
    string getISBN() const;
};
