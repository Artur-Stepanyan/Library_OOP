#include "student.h"

Student::Student(std::string name, int age, Library* library)
               : m_name(name), m_age(age), library(library){}

std::string Student::getStudentName() {return m_name;}
int Student::getStudentAge() {return m_age;}

void Student::borrowBook (std::string author, std::string title)
{   
    library->bookCheckOut(author, title, m_name);
}

void Student::returnBook(int ID)
{
    library->bookCheckIn(ID, m_name);
}





