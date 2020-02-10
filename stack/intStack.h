#ifndef STACK_H
#define STACK_H

const int STACKSIZE = 100;
const int EMPTY = -1;

class intStack
{
  public:
    intStack();

    bool push(int item);
    bool pop(int &item);

  private:
    bool isEmpty() const;
    bool isFull() const;
    
    int top;
    int stack[STACKSIZE];
};

#endif
