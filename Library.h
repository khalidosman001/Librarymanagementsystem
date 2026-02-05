#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(Book book);
    void registerUser(User user);

    void searchBookByTitle(string title);
    bool borrowBook(int userId, int bookId);
    bool returnBook(int userId, int bookId);
};

#endif

