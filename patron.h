#ifdef PATRON_H
#define PATRON_H
#include <string>

class Patron{
    private:
    std::string name;
    std::string libraryCardNumber;

    public:
    //Constructor
    Patron(const std::string& name,const std::string& libraryCardNumber){};

    //Getters
    void getname()const{};
    void getlibraryCardNumber()const{};

    //Setters
    void setname(std::string& name){};
    void setlibraryCardNumber(int& libraryCardNumber){};

    void updateContactInfo(const std::string& newContactInfo){};
    void canBorrowMoreBooks(int currentBorrowedCount, int maxLimit){};

};
#endif 