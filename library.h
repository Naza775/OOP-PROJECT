#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
std::vector<BookItem> books;
std::vector<Patron> patrons;
std::vector<PatronRecord> patronRecords;

public:
 void addBook(const BookItem& book){};
    void addPatron(const Patron& patron){};
    void borrowBook(const std::string& isbn, const std::string& patronCardNumber){};
    void returnBook(const std::string& isbn, const std::string& patronCardNumber){};
    std::vector<BookItem> searchBooksByTitle(const std::string& title) const{};
    std::vector<BookItem> searchBooksByAuthor(const std::string& author) const{};
    Patron searchPatronByName(const std::string& name) const{};
    std::vector<BookItem> listOverdueBooks() const{};
    void notifyPatronsWithOverdueBooks() const{};
    void generateLibraryReport() const{};
    bool isBookAvailable(const std::string& isbn) const{};
    void reserveBook(const std::string& isbn, const std::string& patronCardNumber){};
    void viewTransactionHistory(const std::string& patronCardNumber) const{};

}
#endif