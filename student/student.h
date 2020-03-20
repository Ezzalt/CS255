//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 6
// Due date: 20/03/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for student
//------------------------------------------------------------------------------
#include<string>
//inclusion guard begins

#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

//class declaration begins
class student
{
    public:
        student();//public constructors
        student(const student&);

        void setCourseNum();//mutator functions
        void setStudentName();
        void setStudentNumber();
        void setCoursesList();
        void setCourseNum(unsigned int);
        void setStudentName(string);
        void setStudentNumber(string);
        void setCoursesList(string*,unsigned int);

        unsigned int courseNum() const;//accessor functions
        string studentName() const;
        string studentNumber() const;
        string* coursesList(unsigned int&) const;
        int retListSize() const;

        bool operator==(const student&) const;//comparison functions
        bool checkList(const string*, const string*, unsigned int) const;

    private://private variables
        string* courseList;
        string name, number;
        unsigned int courses;
};

//inclusion guard ends
#endif
