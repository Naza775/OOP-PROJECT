#include "library_item.h"
#include <iostream>

// Constructor
LibraryItem::LibraryItem(const std::string& itemTitle): title(itemTitle), isCheckedOut(false), dueDate(0) {}

// Check out the library item
void LibraryItem::checkOut() {
    if (!isCheckedOut) {
        isCheckedOut = true;
        std::cout << "Library item checked out: " << title << std::endl;
    } else {
        std::cout << "Library item is already checked out." << std::endl;
    }
}

// Return the library item
void LibraryItem::returnItem() {
    if (isCheckedOut) {
        isCheckedOut = false;
        std::cout << "Library item returned: " << title << std::endl;
    } else {
        std::cout << "Library item is not checked out." << std::endl;
    }
}

// Renew the library item
void LibraryItem::renewItem(int extraDays) {
    dueDate += extraDays;
    std::cout << "Library item renewed for " << extraDays << " extra days." << std::endl;
}

// Mark the library item as lost
void LibraryItem::markAsLost() {
    if (isCheckedOut) {
        isCheckedOut = false;
        std::cout << "Item marked as lost: " << title << std::endl;
    } else {
        std::cout << "Item is not currently checked out and cannot be marked as lost." << std::endl;
    }
}