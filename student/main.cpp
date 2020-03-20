//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 6
// Due date: 20/03/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------
#include <iostream>
#include "student.h"
using namespace std;

void display(const student&);

int main()
{
    student a; // initialising the first student
    display(a);
    student b(a); // copying over the values to the second student
    cout << "Checking the copied student data:" << endl;
    display(b);
    if(a == b) // checking if they are completely the same
        cout << "The two are same!!" << endl;
    else
        cout << "Copy failed!!" << endl;
    return 0;
}

//------------------------------------------------------------------------------
/* display - Display student information stored in object
  input - const student disp - pointer to sent value
*/
void display(const student& disp)
{
    unsigned int x = 0;
    string* courses = disp.coursesList(x);
    cout << "---------------------------------------------------------" << endl;
    cout << "The student is: " << endl;
    cout << "Name: " << disp.studentName() << endl;
    cout << "Student Number: " << disp.studentNumber() << endl;
    cout << "Number of courses taken: " << disp.courseNum() << endl;
    cout << "Courses: " << endl;
    for(int i = 0; i < x; i++)
        cout << courses[i] << endl;
    cout << "---------------------------------------------------------" << endl;

}
