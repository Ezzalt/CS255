//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 3
// Due date: 02/19/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for convertToNum.h
//------------------------------------------------------------------------------
#include<iostream>
#include<string>
#include<cmath>
#include "charStack.h"
#include "convertToNum.h"

using namespace std;

//class implementation begins
//------------------------------------------------------------------------------
/* convertToNum() - default constructor
*/
convertToNum::convertToNum()
{
  input = "";
}

//------------------------------------------------------------------------------
/* convertToNum(string in) - overloaded constructor for string input
*/
convertToNum::convertToNum(string in)
{
  input = in;
}

//------------------------------------------------------------------------------
/* convert() - convert input string to long int and double
*/
bool convertToNum::convert(string in)
{
  charStack integers, fractions;

  int flag = 0, i = 0;
  char popped;

  do
  {
    if(!isdigit(in[i]) && in[i]!= '.')
      return false;
    if(in[i] == '.')
    {
      flag++;
      i++;
      break;
    }
  }while(integers.push(in[i++]) && (i < static_cast<int>(in.length())));

  if(flag != 0)
    do
    {
      if(!isdigit(in[i]))
        return false;
    }while(fractions.push(in[i++]) && (i < static_cast<int>(in.length())));

  if(fractions.stackHeight()!=0)
  {
    for(i = -(fractions.stackHeight()); i < 0 && fractions.pop(popped); i++)
    {
      returnDouble = pow(10, i)*static_cast<double>(popped - '0') + returnDouble;
    }
  }

  for(i = 0; integers.pop(popped); i++)
  {
    returnInt = pow(10, i)*static_cast<int>(popped - '0') + returnInt;
    returnDouble = pow(10, i)*static_cast<double>(popped - '0') + returnDouble;
  }

  if(fractions.stackHeight() == 0 || integers.stackHeight() == 0)
    return true;
  else
    return false;
}

//------------------------------------------------------------------------------
/* getIntValue() - get long int value as return
*/
long convertToNum::getIntValue()
{
  return returnInt;
}

//------------------------------------------------------------------------------
/* getDoubleValue() - get long int value as return
*/
double convertToNum::getDecValue()
{
  return returnDouble;
}
