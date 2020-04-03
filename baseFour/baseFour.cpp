//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 7
// Due date: 04/03/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for baseFour.h
//------------------------------------------------------------------------------

#include<cmath>
#include<iostream>
#include "baseFour.h"

using namespace std;

//class implementation begins
//------------------------------------------------------------------------------
/* baseFour() - default constructor
*/
baseFour::baseFour()
{
    num = 0;
}

//------------------------------------------------------------------------------
/* baseFour(int) - default constructor
  value - for num value
*/
baseFour::baseFour(int value)
{
    set(value);
}

//------------------------------------------------------------------------------
/* getValue() - returns number as an int
*/
int baseFour::getValue() const
{
    return num;
}

//------------------------------------------------------------------------------
/* set() - set number
    input - value for number
*/
bool baseFour::set(int input)
{
    if(input >= 0)
    {
        int i = 0;
        num = 0;
        while(input != 0)
        {
  			     num += (pow(10,i++))*(input % 4);
  			     input = input / 4;
  	    }
        return true;
    }
    else
        return false;
}


//------------------------------------------------------------------------------
/* operator+ - Overloaded - (plus) operator is used to perform addition
  input - const baseFour value - constant pointer to value
  output - const baseFour returns
*/
baseFour baseFour::operator + (const baseFour& value)
{
    int result = 0, x = value.getValue(), i = 0;
    while(x != 0)
  	{
  			result += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    x = num, i = 0;

    while(x != 0)
  	{
  			result += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    return baseFour(result);
}

//------------------------------------------------------------------------------
/* operator- - Overloaded - (minus) operator is used to perform subtraction
  input - const baseFour value - constant pointer to value
  output - const baseFour returns
*/
baseFour baseFour::operator - (const baseFour& value)
{
    int result = 0, x = num, i = 0;
    while(x != 0)
  	{
  			result += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    x = value.getValue(), i = 0;

    while(x != 0)
  	{
  			result -= (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    return baseFour(result);
}
//------------------------------------------------------------------------------
/* operator* - Overloaded - (multiply) operator is used to perform product
  input - const baseFour value - constant pointer to value
  output - const baseFour returns
*/
baseFour baseFour::operator * (const baseFour& value)
{
    int r1 = 0, r2 = 0, x = value.getValue(), i = 0;
    while(x != 0)
  	{
  			r1 += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    x = num, i = 0;

    while(x != 0)
  	{
  			r2 += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    return baseFour(r1 * r2);
}

//------------------------------------------------------------------------------
/* operator/ - Overloaded - (division) operator is used to perform quotient
  input - const baseFour value - constant pointer to value
  output - const baseFour returns
*/
baseFour baseFour::operator / (const baseFour& value)
{
    int r1 = 0, r2 = 0, x = value.getValue(), i = 0;
    while(x != 0)
  	{
  			r1 += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}

    x = num, i = 0;

    while(x != 0)
  	{
  			r2 += (pow(4,i++)) * (x % 10);
  			x /= 10;
  	}
    return baseFour(r2 / r1);
}
//------------------------------------------------------------------------------
/* operator++ - Overloaded - (Prefix increment) operator is used to increment
    value
*/
void baseFour::operator++()
{
    if(((num + 1) % 10) == 4)
    {
        num += 7;
    }
    else
        ++num;
}

//------------------------------------------------------------------------------
/* operator++(int) - Overloaded - (postfix increment) operator is used to
    increment value
  input - int - empty integer
*/
void baseFour::operator++(int)
{
    if(((num + 1) % 10) == 4)
    {
        num += 7;
    }
    else
      num++;
}

//------------------------------------------------------------------------------
/* operator << - Overloaded - (insertion) operator is used to add value
  to output stream
  input - const baseFour value - constant pointer to value
          ostream out - reference to output object
  output - const baseFour returns
*/
ostream& operator << (ostream& out, const baseFour& value)
{
    out << value.num;
    return out;
}

//------------------------------------------------------------------------------
/* operator << - Overloaded - (extraction) operator is used to extract value
  from input stream
  input - baseFour value - constant pointer to value
          istream in - reference to inut object
  output - const baseFour returns
*/
istream& operator >> (istream& in, baseFour& value)
{
    int x = 0;
Redo:
    cout << "Input value in base 4: ";
    in >> x;
    if(x > 0)
    {
        value.num = x;
        return in;
    }
    else
    {
        cout << "Negative values are not allowed!!" << endl;
        goto Redo;
    }
}
