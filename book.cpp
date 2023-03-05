#include "book.h"

Book::Book(std::string author, std::string title, int ID):
    m_author(author), m_title(title),  m_bookID(ID), m_available(true) {}

std::string Book::getAuthor() { return m_author; }
std::string Book::getTitle(){ return m_title; }
bool Book::getStatus() { return m_available; }
int Book::getBookID() { return m_bookID; }          

void Book::setStatus (bool available) { m_available = available; }

Book::~Book() {}
