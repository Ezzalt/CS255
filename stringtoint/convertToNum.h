//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 3
// Due date: 02/19/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for convertToNum
//------------------------------------------------------------------------------
#include<string>

//inclusion guard begins
#ifndef CTONUM_H
#define CTONUM_H

//class declaration begins
class convertToNum
{
  public:
    convertToNum();
    convertToNum(std::string in);
    bool convert(std::string in);
    long getIntValue();
    double getDecValue();

  private:
    std::string input;
    unsigned long returnInt;
    double returnDouble;
};

//inclusion guard ends
#endif
