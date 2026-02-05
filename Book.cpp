#include "Book.h"

Book::Book(int id, string title, string author)
    : id(id), title(title), author(author), isBorrowed(false) {}

int Book::getId() const {
    return id;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

bool Book::isAvailable() const {
    return !isBorrowed;
}

bool Book::borrowBook() {
    if (isBorrowed)
        return false;
    isBorrowed = true;
    return true;
}

void Book::returnBook() {
    isBorrowed = false;
}

