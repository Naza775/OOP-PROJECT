#include "patron.h"
#include <iostream>
#include <iostream>

// Default Constructor
Patron::Patron()
    : name(""), libraryCardNumber(""), contactInfo("") {}

// Parameterized Constructor
Patron::Patron(const std::string& name, const std::string& libraryCardNumber, const std::string& contactInfo)
    : name(name), libraryCardNumber(libraryCardNumber), contactInfo(contactInfo) {}

// Getter for Name
std::string Patron::getName() const {
    return name;
}

// Getter for Library Card Number
std::string Patron::getLibraryCardNumber() const {
    return libraryCardNumber;
}

// Setter for Name
void Patron::setName(const std::string& newName) {
    name = newName;
}

// Setter for Library Card Number
void Patron::setLibraryCardNumber(const std::string& newCardNumber) {
    libraryCardNumber = newCardNumber;
}

// Update Contact Info
void Patron::updateContactInfo(const std::string& newContactInfo) {
    contactInfo = newContactInfo;
    std::cout << "Contact information updated to: " << contactInfo << "\n";
}

// Check if Patron Can Borrow More Books
bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    if (currentBorrowedCount < maxLimit) {
        std::cout << "Patron can borrow more books.\n";
        return true;
    } else {
        std::cout << "Patron has exceeded the maximum limit and cannot borrow more books.\n";
        return false;
    }
}
