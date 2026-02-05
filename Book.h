#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool isBorrowed;

public:
    Book(int id, string title, string author);

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    bool isAvailable() const;

    bool borrowBook();
    void returnBook();
};

#endif

