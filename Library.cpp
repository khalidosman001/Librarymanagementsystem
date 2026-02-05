#include "Library.h"
#include <iostream>

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::registerUser(User user) {
    users.push_back(user);
}

void Library::searchBookByTitle(string title) {
    for (auto &book : books) {
        if (book.getTitle() == title) {
            cout << "Found: " << book.getTitle()
                 << " by " << book.getAuthor() << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

bool Library::borrowBook(int userId, int bookId) {
    for (auto &user : users) {
        if (user.getId() == userId) {
            for (auto &book : books) {
                if (book.getId() == bookId && book.borrowBook()) {
                    user.borrowBook(bookId);
                    return true;
                }
            }
        }
    }
    return false;
}

bool Library::returnBook(int userId, int bookId) {
    for (auto &user : users) {
        if (user.getId() == userId) {
            if (user.returnBook(bookId)) {
                for (auto &book : books) {
                    if (book.getId() == bookId) {
                        book.returnBook();
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

