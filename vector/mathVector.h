//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 5
// Due date: 13/03/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for mathVector
//------------------------------------------------------------------------------
//inclusion guard begins
#ifndef MATHVECTOR_H
#define MATHVECTOR_H

//class declaration begins
class mathVector
{
    public:
        mathVector();//public constructors
        mathVector(int, int);

        int getX() const;//public functions
        int getY() const;
        void set(int, int);
        double magnitude() const;
        double theta() const;
        mathVector operator-(const mathVector& vec);
        int operator*(const mathVector& vec);

    private:
        int x, y;//private variables
};

//overloaded non member functions for + and == operators

const mathVector operator+(const mathVector&, const mathVector&);

bool operator==(const mathVector&, const mathVector&);

//inclusion guard ends
#endif
