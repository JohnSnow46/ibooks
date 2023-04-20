#pragma once
#include <iostream>

class Book {
private:
	int idBook;
	std::string author;
	std::string title;
	int year;
	int numberOfBooks;
	int numberOfAvaliableBooks;
public:
	Book(int id, std::string tit, std::string aut, int year, int number);
	int getId();
	std::string getTitle();
	std::string getAuthor();
	int getYear();
	int getNumberOfBooks();
	int getNumberOfAvailableBooks();
	void removeAvailableBook();
	void addAvailableBook();
};
