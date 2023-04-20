#include "Book.h"

Book::Book(int id, std::string tit, std::string aut, int year, int number) {
    idBook = id;
    title = tit;
    author = aut;
    this->year = year;
    numberOfBooks = number;
    numberOfAvaliableBooks = number;
}

int Book::getId() {
    return idBook;
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

int Book::getYear() {
    return year;
}

int Book::getNumberOfBooks() {
    return numberOfBooks;
}

int Book::getNumberOfAvailableBooks() {
    return numberOfAvaliableBooks;
}

void Book::removeAvailableBook() {
    if (numberOfAvaliableBooks > 0) {
        numberOfAvaliableBooks--;
    }
}

void Book::addAvailableBook() {
    if (numberOfAvaliableBooks < numberOfBooks) {
        numberOfAvaliableBooks++;
    }
}