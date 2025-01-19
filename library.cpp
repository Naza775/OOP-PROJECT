#include "library.h"
#include <iostream>


void Library::addBook(const BookItem& book) {
    books.push_back(book);
    std::cout << "Added book: " << book.getTitle() << std::endl;
}

void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    std::cout << "Added patron: " << patron.getName() << std::endl;
}

bool Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    BookItem* bookToBorrow = nullptr;
    for (auto& book : books) {
        if (book.getISBN() == isbn && !book.getIsCheckedOut()) {
            bookToBorrow = &book;
            break;
        }
    }

    Patron* borrowingPatron = nullptr;
    for (auto& patron : patrons) {
        if (patron.getLibraryCardNumber() == patronCardNumber) {
            borrowingPatron = &patron;
            break;
        }
    }

    if (!bookToBorrow || !borrowingPatron) {
        std::cout << "Cannot process request.\n";
        return false;
    }

    bookToBorrow->checkOut();
    std::cout << "Book borrowed: " << bookToBorrow->getTitle() << "\n";
    return true;
}

bool Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    for (auto& book : books) {
        if (book.getISBN() == isbn && book.getIsCheckedOut()) {
            book.returnItem();
            std::cout << "Book returned: " << book.getTitle() << std::endl;
            return true;
        }
    }

    std::cout << "Book not found or not checked out."<<std::endl;
    return false;
}

void Library::searchBooksByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book.getTitle().find(title) != std::string::npos) {
            book.printDetails();
        }
    }
}

void Library::searchBooksByAuthor(const std::string& author) const {
    for (const auto& book : books) {
        if (book.getAuthor().find(author) != std::string::npos) {
            book.printDetails();
        }
    }
}

void Library::generateLibraryReport() const {
    std::cout << "Library Report:\nBooks: " << books.size() << ", Patrons: " << patrons.size() <<std::endl;
}
