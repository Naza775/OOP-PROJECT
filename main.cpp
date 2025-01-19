#include "library.h"
#include "book_item.h"
#include "patron.h"
#include <iostream>
#include <string>

int main() {
    Library library;

    // Create some books
    BookItem book1("Introduction to C++", "Dr Emmanuel Ali", 123456789);
    BookItem book2("Jake winters", "Jane Smith", 987654321);

    // Create some patrons
    Patron patron1("Alice", "LIB001");
    Patron patron2("Bob", "LIB002");

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Add patrons to the library
    library.addPatron(patron1);
    library.addPatron(patron2);

    // Borrow a book
    library.borrowBook("123456789", "LIB001");

    // Generate library report
    std::cout << "\nLibrary Report:\n";
    library.generateLibraryReport();

    // Return a book
    library.returnBook("123456789", "LIB001");

    // Search for a book by title
    auto results = library.searchBooksByTitle("Introduction to C++");
    if (!results.empty()) {
        std::cout << "\nSearch Results for Title 'Introduction to C++':\n";
        for (const auto& book : results) {
            book.printDetails();
        }
    } else {
        std::cout << "No books found with the title 'Introduction to C++'.\n";
    }

    // Search for a patron by name
    try {
        Patron foundPatron = library.searchPatronByName("Alice");
        std::cout << "\nFound Patron: " << foundPatron.getName() << " (Card Number: " << foundPatron.getLibraryCardNumber() << ")\n";
    } catch (const std::exception& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}
