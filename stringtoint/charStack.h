#ifndef CHARSTACK_H
#define CHARSTACK_H

const int STACKSIZE = 100;
const int EMPTY = -1;

class charStack
{
  public:
    charStack();
    bool push(char item);
    bool pop(char &item);
    int stackHeight() const;

  private:
    bool isEmpty() const;
    bool isFull() const;

    int top;
    int height;
    int stack[STACKSIZE];
};

#endif
