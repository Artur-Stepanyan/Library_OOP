#include "book.h"
#include "library.h"
#include "student.h"
#include <iostream>
#include <string>

int main()
{
    Library library;

    Book book1("F. Scott Fitzgerald", "The Great Gatsby", 1000);
    Book book2("Harper Lee", "To Kill a Mockingbird", 1001);

    library.bookAdd(&book1);
    library.bookAdd(&book2);

    Student Alice("Alice", 14, &library);
    Student Bob("Bob", 15, &library);

    Alice.borrowBook("F. Scott Fitzgerald", "The Great Gatsby");
    Bob.borrowBook("Harper Lee", "To Kill a Mockingbird");

    Alice.borrowBook("Harper Lee", "To Kill a Mockingbird");
    Bob.returnBook(1001);
    Alice.borrowBook("Harper Lee", "To Kill a Mockingbird");

    Bob.returnBook(1004);
    
    Alice.borrowBook("Remark", "1984");

}