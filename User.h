#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
using namespace std;

class User {
private:
    int userId;
    string name;
    vector<int> borrowedBooks;

public:
    User(int id, string name);

    int getId() const;
    string getName() const;

    void borrowBook(int bookId);
    bool returnBook(int bookId);
};

#endif

