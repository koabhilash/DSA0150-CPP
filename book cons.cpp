#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    // Constructor
    Book(const std::string& title, const std::string& author) 
        : title(title), author(author) {
        std::cout << "Book \"" << title << "\" by " << author << " created." << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book \"" << title << "\" by " << author << " is being destroyed." << std::endl;
    }

    // Methods
    void display() const {
        std::cout << "Book Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    Book book("1984", "George Orwell");
    book.display();

    return 0;
}

