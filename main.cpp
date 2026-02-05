#include "Library.h"
#include <iostream>
using namespace std;

int main() {
    Library library;

    library.addBook(Book(1, "C++ Programming", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Data Structures", "Mark Allen"));

    library.registerUser(User(101, "Alice"));

    library.searchBookByTitle("C++ Programming");

    if (library.borrowBook(101, 1))
        cout << "Book borrowed successfully" << endl;
    else
        cout << "Borrow failed" << endl;

    if (library.returnBook(101, 1))
        cout << "Book returned successfully" << endl;
    else
        cout << "Return failed" << endl;

    return 0;
}

