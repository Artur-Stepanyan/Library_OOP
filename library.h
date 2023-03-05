#ifndef library_h
#define library_h
#include <iostream>
#include <vector>
#include "book.h"

class Library 
{
    private:
        std::vector<Book> m_books;

    public:
        void bookAdd(const Book* const bookptr);
        
        int bookRequest(Book& bookref);
        
        void bookCheckIn (int ID, std::string name);

        Book* bookCheckOut(std::string author, std::string title, std::string name);
};

#endif