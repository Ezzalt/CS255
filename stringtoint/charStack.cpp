//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 3
// Due date: 02/19/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for charStack.h
//------------------------------------------------------------------------------
#include <iostream>
#include "charStack.h"

//class implementation begins
//------------------------------------------------------------------------------
/* charStack() - default constructor
*/
charStack::charStack()
{
  top = -1;
}

//------------------------------------------------------------------------------
/* push() - push values onto charStack
*/
bool charStack::push(char item)
{
  if(!isFull())
  {
    stack[++top] = item;
    height++;
    return true;
  }
  else
  {
    return false;
  }
}

//------------------------------------------------------------------------------
/* pop() - pop values from charStack
*/
bool charStack::pop(char &item)
{
  bool result = false;

  if(!isEmpty())
  {
    item = stack[top--];
    height--;
    result = true;
  }

  return result;
}


//------------------------------------------------------------------------------
/* isEmpty() - check if charStack is empty
*/
bool charStack::isEmpty() const
{
  return (top==EMPTY);
}

//------------------------------------------------------------------------------
/* isFull() - check if charStack is full
*/
bool charStack::isFull() const
{
  return (top==(STACKSIZE-1));
}

//------------------------------------------------------------------------------
/* stackHeight() - return charStack height
*/
int charStack::stackHeight() const
{
  return height;
}
