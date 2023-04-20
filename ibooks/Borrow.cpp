#include "Borrow.h"
#include "client.h"
// konstruktor
Borrow::Borrow(Book* book, Client client, int borrowDate, int returnDate) {
    this->book = book;
    this->client = client;
    this->borrowDate = borrowDate;
    this->returnDate = returnDate;
}

// getter dla obiektu klasy Client
Client Borrow::getClient() {
    return client;
}

// getter dla nazwy wypo¿yczaj¹cego
std::string Borrow::getBorrowerName() {
    return client.getName();
}

// getter dla daty wypo¿yczenia
int Borrow::getBorrowDate() {
    return borrowDate;
}

// getter dla daty zwrotu
int Borrow::getReturnDate() {
    return returnDate;
}

// getter dla obiektu klasy Book
Book* Borrow::getBook() {
    return book;
}
