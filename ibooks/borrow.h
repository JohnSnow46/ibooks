#pragma once
#include <iostream>
#include "Book.h"
#include "Client.h"

class Borrow {
private:
    Book* book;
    Client client;
    int borrowDate;
    int returnDate;
public:
    Borrow(Book* book, Client client, int borrowDate, int returnDate);
    std::string getBorrowerName();
    int getBorrowDate();
    int getReturnDate();
    Book* getBook();
    Client getClient();
    void borrowBook();
    void returnBook();
};