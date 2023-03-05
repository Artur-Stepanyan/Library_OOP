#ifndef student_h
#define student_h
#include "library.h"
#include <string>

class Student
{
    private:
        std::string m_name;
        //std::string m_faculty;
        int m_age;
        Library* library;

    public:
        Student(std::string name, int age, Library* library);
        
        std::string getStudentName();
        //std::string getStudentFaculty();
        int getStudentAge();

        //void setStudentFaculty(std::string newFaculty);

        void borrowBook (std::string author, std::string title);
        void returnBook (int ID);
};
#endif