//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 2
// Due date: 01/31/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for charStack
//------------------------------------------------------------------------------
//inclusion guard begins
#ifndef CHARSTACK_H
#define CHARSTACK_H

//class declaration begins
const int STACKSIZE = 100;
const int EMPTY = -1;

class charStack
{
  public: // public variable for global usage
    charStack();
    bool push(char item);
    bool pop(char &item);
    int stackHeight() const;

  private: // private usage for class usage
    bool isEmpty() const;
    bool isFull() const;

    int top;
    int height;
    int stack[STACKSIZE];
};

//inclusion guard ends
#endif
