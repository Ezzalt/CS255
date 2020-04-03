//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 7
// Due date: 04/03/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for baseFour
//------------------------------------------------------------------------------
//inclusion guard begins

#include<iostream>
#ifndef BASEFOUR_H
#define BASEFOUR_H

using namespace std;
//class declaration begins
class baseFour
{
    public:
        baseFour();//public constructors
        baseFour(int);

        int getValue() const;//public functions
        bool set(int);

        baseFour operator+(const baseFour& value);
        baseFour operator-(const baseFour& value);
        baseFour operator*(const baseFour& value);
        baseFour operator/(const baseFour& value);

        void operator++();
        void operator++(int);

        friend ostream & operator << (ostream &out, const baseFour &value);
        friend istream & operator >> (istream &in, baseFour &value);

    private:
        int num;//private variable
};

//inclusion guard ends
#endif
