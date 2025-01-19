#include "patron.h"
#include <iostream>



Patron(const std::string& name, const std::string& libraryCardNumber){}: name(name), libraryCardNumber(libraryCardNumber)

std::string Patron::getName() const { 
    return name; 
}
void Patron::setName(const std::string& name) { 
    this->name = name; 
}
std::string Patron::getLibraryCardNumber() const { 
    return libraryCardNumber; 
}
void Patron::setLibraryCardNumber(const int& libraryCardNumber) { 
    this->libraryCardNumber = libraryCardNumber; 
}

// Updating the contact info
void Patron::updateContactInfo(const std::string& newContactInfo) {
    setName(newContactInfo);
}

// To check if patron can borrow more books
bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}
