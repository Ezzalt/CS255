//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 5
// Due date: 03/13/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for mathVector.h
//------------------------------------------------------------------------------

#include <cmath>
#include "mathVector.h"

//class implementation begins
//------------------------------------------------------------------------------
/* mathVector() - default constructor
*/
mathVector::mathVector()
{
    x = 0;
    y = 0;
}

//------------------------------------------------------------------------------
/* mathVector(int, int) - default constructor
  Abcissa - int for x
  Ordinate - int for y
*/
mathVector::mathVector(int abcissa, int ordinate)
{
    set(abcissa, ordinate);
}

//------------------------------------------------------------------------------
/* getX() - returns x coordinate as an int
*/
int mathVector::getX() const
{
    return x;
}

//------------------------------------------------------------------------------
/* getY() - returns y coordinate as an int
*/
int mathVector::getY() const
{
    return y;
}

//------------------------------------------------------------------------------
/* set() - set abcissa and ordinate as x and y
  Abcissa - x coordinate
  ordinate - y coordinate
*/
void mathVector::set(int abcissa, int ordinate)
{
    x = abcissa;
    y = ordinate;
}

//------------------------------------------------------------------------------
/* magnitude() - returns magnitude of vector
*/
double mathVector::magnitude() const
{
    double magnitude = pow(x, 2) + pow(y, 2);
    return sqrt(magnitude);
}

//------------------------------------------------------------------------------
/* theta() - returns the value of theta or the direction angle for vectors
*/
double mathVector::theta() const
{
    return atan(x/y);
}

//------------------------------------------------------------------------------
/* operator- - Overloaded - (minus) operator is used to perform vector
    subtraction
  input - const mathVector vec - constant pointer to second vector
  output - const mathVector returns
*/
mathVector mathVector::operator-(const mathVector& vec)
{
    int abcissa = x - vec.getX();
    int ordinate = y - vec.getY();
    return mathVector(abcissa, ordinate);
}

//------------------------------------------------------------------------------
/* operator* - Overloaded * (star) operator is used to perform vector
    dot product
  input - const mathVector vec - constant pointer to second vector
  output - const mathVector returns
*/
int mathVector::operator*(const mathVector& vec)
{
    return (x * vec.getX() + y * vec.getY());
}

//------------------------------------------------------------------------------
/* operator+ - Overloaded + (plus) operator is used to declare vector
    addition
  input - const mathVector vec1 - constant pointer to first vector
          const mathVector vec2 - constant pointer to second vector
  output - integer returns with scalar product
*/
const mathVector operator+(const mathVector& vec1, const mathVector& vec2)
{
    int abcissa, ordinate;
    abcissa = vec1.getX() + vec2.getX();
    ordinate = vec1.getY() + vec2.getY();
    return mathVector(abcissa, ordinate);
}

//------------------------------------------------------------------------------
/* operator== - Overloaded == (equality) operator is used to declare vector
    equality
  input - const mathVector vec1 - constant pointer to first vector
          const mathVector vec2 - constant pointer to second vector
  output - bool returns with equality result
*/
bool operator==(const mathVector& vec1, const mathVector& vec2)
{
    bool equal = false;
    if (vec1.magnitude() == vec2.magnitude() && vec1.theta() == vec2.theta())
        equal = true;
    return equal;
}
