#include <iostream>
#include <string>

class Book {
private:
    std::string Title;
    std::string Author;
    std::string ISBN;

public:
    Book(const std::string& title = "", const std::string& author = "", const std::string& isbn = "")
        : Title(title), Author(author), ISBN(isbn) {}

    std::string getTitle() const {
        return Title;
    }

    std::string getAuthor() const {
        return Author;
    }

    std::string getISBN() const {
        return ISBN;
    }

    void setTitle(const std::string& newTitle) {
        Title = newTitle;
    }

    void setAuthor(const std::string& newAuthor) {
        Author = newAuthor;
    }

    void setISBN(const std::string& newISBN) {
        ISBN = newISBN;
    }

    void bookinfo() const{
        std::cout<<"Title:"<<Title<<std::endl;
        std::cout<<"Author:"<<Author<<std::endl;
        std::cout<<"ISBN:"<<ISBN<<std::endl;

    }
};
