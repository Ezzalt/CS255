//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 6
// Due date: 02/20/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for student.h
//------------------------------------------------------------------------------

#include<iostream>
#include"student.h"

using namespace std;

//class implementation begins
//------------------------------------------------------------------------------
/* student() - default constructor
*/
student::student()
{
    setStudentName();
    setStudentNumber();
    setCourseNum();
    setCoursesList();
}

//------------------------------------------------------------------------------
/* student(const student& in) - copy constructor for input of other object
    inputs - const student& in - object to be copied
*/
student::student(const student& in)
{
    unsigned int x;
    setStudentName(in.studentName());
    setStudentNumber(in.studentNumber());
    setCoursesList(in.coursesList(x), in.courseNum());
    setCourseNum(in.courseNum());
}

//------------------------------------------------------------------------------
/* setStudentName() - set name of student
    input - name - get name and store there
*/
void student::setStudentName()
{
    cout << "Input name of student: ";
    cin >> name;
}

//------------------------------------------------------------------------------
/* setStudentName(string stuName) - set name of student
    input - string stuName - copy value to name
*/
void student::setStudentName(string stuName)
{
    name = stuName;
}

//------------------------------------------------------------------------------
/* setStudentNumber() - set id number of student
    input - number - get id number and store there
*/
void student::setStudentNumber()
{
    cout << "Input "<< name <<"'s student number: ";
    cin >> number;
}

//------------------------------------------------------------------------------
/* setStudentNumber(string stuNumber) - set name of student
    inputs - string stuNumber - get id number and store it to number
*/
void student::setStudentNumber(string stuNumber)
{
    number = stuNumber;
}

//------------------------------------------------------------------------------
/* setcourseNum() - set number of courses student has
    input - courses - integer number of courses
*/
void student::setCourseNum()
{
    cout << "Input number of courses " << name << " is taking: ";
    cin >> courses;
}

//------------------------------------------------------------------------------
/* setcourseNum() - set number of courses student has
    input - unsigned int n - get integer number of courses and store
*/
void student::setCourseNum(unsigned int n)
{
    courses = n;
}

//------------------------------------------------------------------------------
/* setCoursesList() - set list of courses
    input - all courses
*/
void student::setCoursesList(){
    cout << "Input courses for " << studentName() << " : ";
    courseList = new string[courses];
    for(unsigned int i = 0; i < courses; i++)
    {
        getline(cin, courseList[i]);
        while(courseList[i].length() == 0)
            getline(cin, courseList[i]);
    }
}

//------------------------------------------------------------------------------
/* setCoursesList(string* list, unsigned int size) - set list of courses
    input - string* list - list to be copied
          - unsigned int size - size of list
*/
void student::setCoursesList(string* list, unsigned int size){
    courses = size;
    courseList = new string[courses];
    for(unsigned int i = 0; i < courses; i++)
        courseList[i] = list[i];
}

//------------------------------------------------------------------------------
/* courseNum() - return number of courses
*/
unsigned int student::courseNum() const
{
    return courses;
}

//------------------------------------------------------------------------------
/* studentName() - return Name of student
*/
string student::studentName() const
{
    return name;
}

//------------------------------------------------------------------------------
/* studentNumber() - return id number of student
*/
string student::studentNumber() const
{
    return number;
}

//------------------------------------------------------------------------------
/* coursesList() - return a list of courses with it's size as a reference
*/
string* student::coursesList(unsigned int& size) const
{
    size = courses;
    string* list = new string[size];
    for(unsigned int i = 0; i < size; i++)
        list[i] = courseList[i];
    return list;
}

//------------------------------------------------------------------------------
/* operator== - Overloaded == (equality) operator is used to declare vector
    equality
  input - const student stu - constant pointer to first vector
  output - bool returns with equality result
*/
bool student::operator==(const student& stu) const
{
    bool equal = false;
    int stName = studentName().compare(stu.studentName());
    int stNum = studentNumber().compare(stu.studentNumber());
    bool listEq = true;
    if(courses != stu.courseNum())
        listEq = false;
    else
    {
        unsigned int x = 0;
        listEq = checkList(courseList, stu.coursesList(x), x);
    }

    if (stName == 0 && stNum == 0 && listEq)
        equal = true;

    return equal;
}

//------------------------------------------------------------------------------
/* checkList()() - return If the two objects of the class are equivalent or not
    input - const string* l1 - list 1
          - const string* l2 - list 2
          - unsinged int size - size of both the lsits(already compared to be
              equal)
*/
bool student::checkList(const string* l1, const string* l2, unsigned int size) const
{
    for(unsigned int i = 0; i < size; i++)
    {
        if(l1[i].compare(l2[i]) != 0)
            return false;
    }
    return true;
}
