#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book(const std::string& title = "", const std::string& author = "", const std::string& isbn = "")
        : title(title), author(author), isbn(isbn) {}

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }
    std::string getISBN() const {
        return isbn;
    }

    void setTitle(const std::string& newTitle) {
        title = newTitle;
    }

    void setAuthor(const std::string& newAuthor) {
        author = newAuthor;
    }

    void setISBN(std::string& newISBN) {
        isbn = newISBN;
    }

    void bookinfo() const{
        std::cout<<"Title:"<<title<<std::endl;
        std::cout<<"Author:"<<author<<std::endl;
        std::cout<<"ISBN:"<<isbn<<std::endl;

    }
};
