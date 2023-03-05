#ifndef book_h
#define book_h
#include <string>

class Book
{   
    private: 
        std::string m_author ;
        std::string m_title ;
        bool m_available ; 
        int m_bookID ;
    
    public:
        //constructors
        Book(std::string author, std::string title, int ID);

        //getters
        std::string getTitle();
        std::string getAuthor(); 
        bool getStatus();
        int getBookID() ;

        //setter
        void setStatus (bool available);

        //destructor
        ~Book();
};
#endif