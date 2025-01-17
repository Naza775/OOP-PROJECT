#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H
#include <string>
#include<iostream>

class LibraryItem{
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;
public:
    LibraryItem(){};
    LibraryItem(const std::string& Title, const std::string& dueDate, bool isCheckedOut){};

    ~LibraryItem(){};

    void inputItem(){};
    void displayItem() const{};

    void setTitle(const std::string& title){};
    std::string getTitle() const{};

    void setIsCheckedOut(bool isCheckedOut ){};
    bool getIsCheckedOut() ;

    void setDueDate( const std::string& dueDate){};
    std::string getDueDate() const{};
    
};
#endif //LIBRARY_ITEM_H