#include "library.h"
#include "student.h"

void Library::bookAdd(const Book* const bookptr)
{
    m_books.push_back(*bookptr);
}

int Library::bookRequest(Book& bookref)
{
    if(bookref.getStatus()) {
        return bookref.getBookID();
    }
    else { return 1;}
}

Book* Library::bookCheckOut(std::string author, std::string title, \
                            std::string name)
{
    int BookID = 0;
    for (int i = 0; i < m_books.size(); i++)
    {
        if (m_books[i].getAuthor() == author && \
            m_books[i].getTitle() == title)
        {
            BookID = Library::bookRequest(m_books[i]);
        }
        if (BookID != 0 && BookID != 1) {
            std::cout << name << " you can pick up the book. "
                      << "Please remember ID: " << BookID << "\n";
            m_books[i].setStatus(false);
            return &m_books[i];
        }
    }
    if(BookID == 0) { 
        std::cout << "Sorry " << name << " no such book in Library.\n";
        return nullptr;
    };
    if(BookID == 1) { 
        std::cout << "Sorry " << name << " book is already borrowed.\n";
        return nullptr;
    };
    return nullptr;
}

void Library::bookCheckIn (int BookID, std::string name)
{
    bool flagID = false;
    for (int i = 0; i < m_books.size(); i++)
    {
        if (m_books[i].getBookID() == BookID && \
            m_books[i].getStatus() == false)
        {
            flagID = true;
            m_books[i].setStatus(true);
            std::cout << name << " returned book with ID: "
                                          << BookID << "\n";
        }
    }
    if (flagID == false){
        std::cout << "Error: returnBook - "
         << "ID is wrong, or book exists" << ", please check.\n";
    }
}