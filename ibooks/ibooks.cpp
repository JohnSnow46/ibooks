#include <iostream>
#include "Book.h"
#include "Borrow.h"
#include "Client.h"

int main()
{
    // Tworzenie obiektu klasy Book
    Book book1(1, "Duma i uprzedzenie", "Jane Austen", 1813, 5);

    // Wyświetlanie informacji o książce
    std::cout << "ID: " << book1.getId() << std::endl;
    std::cout << "Tytuł: " << book1.getTitle() << std::endl;
    std::cout << "Autor: " << book1.getAuthor() << std::endl;
    std::cout << "Rok wydania: " << book1.getYear() << std::endl;
    std::cout << "Liczba egzemplarzy: " << book1.getNumberOfBooks() << std::endl;
    std::cout << "Liczba dostępnych egzemplarzy: " << book1.getNumberOfAvailableBooks() << std::endl;

}
