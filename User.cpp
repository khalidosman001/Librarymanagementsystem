#include "User.h"
#include <algorithm>

User::User(int id, string name)
    : userId(id), name(name) {}

int User::getId() const {
    return userId;
}

string User::getName() const {
    return name;
}

void User::borrowBook(int bookId) {
    borrowedBooks.push_back(bookId);
}

bool User::returnBook(int bookId) {
    auto it = find(borrowedBooks.begin(), borrowedBooks.end(), bookId);
    if (it == borrowedBooks.end())
        return false;
    borrowedBooks.erase(it);
    return true;
}

