#include <iostream>
#include "charStack.h"

charStack::charStack()
{
  top = -1;
}

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

bool charStack::pop(char &item)
{
  bool result = false;

  if(!isEmpty())
  {
    item = stack[top--];
    result = true;
  }

  return result;
}

bool charStack::isEmpty() const
{
  return (top==EMPTY);
}

bool charStack::isFull() const
{
  return (top==(STACKSIZE-1));
}
