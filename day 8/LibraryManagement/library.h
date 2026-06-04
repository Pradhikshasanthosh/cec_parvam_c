#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books; 
    std::string filename;
    void loadFromFile();
    void saveToFile() const;
public:
    Library(const std::string& file = "books.txt");
    void addBook(const Book& book);
    void removeBook(int id);
    void issueBook(int id);
    void returnBook(int id);
    void searchByTitle(const std::string& title) const;
    void searchByAuthor(const std::string& author) const;
    void displayAllBooks() const;
    void displayAvailableBooks() const;
    void displayIssuedBooks() const;
};
#endif