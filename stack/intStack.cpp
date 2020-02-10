#include <iostream>
#include "intStack.h"

intStack::intStack()
{
  top = -1;
}

bool intStack::push(int item)
{
  if(!isFull())
  {
    stack[++top] = item;
    return true;
  }
  else
  {
    return false;
  }
}

bool intStack::pop(int &item)
{
  bool result = false;

  if(!isEmpty())
  {
    item = stack[top--];
    result = true;
  }

  return result;
}

bool intStack::isEmpty() const
{
  return (top==-1);
}

bool intStack::isFull() const
{
  return (top==(STACKSIZE-1));
}
