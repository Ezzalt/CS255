#include<iostream>
#include<random>
#include"intStack.h"

using namespace std;

int main()
{
  intStack stack;
  int item;
  random_device rd;

  for(int i = 0; i< STACKSIZE+1;i++)
  {
    item = rd();
    if(stack.push(item))
      cout << "Pushed " << item <<" into stack at index " << i << endl;
    else
      cerr << "Stack full!!" << endl;
  }
  cout << "___________________________________________________________" << endl;
  cout << "Let us pop the stack Now" <<endl;

  for(int i = STACKSIZE-1 ; i > -10; i--)
  {
    item = 0;
    if(stack.pop(item))
      cout << "Popped " << item <<" from stack at index " << i << endl;
    else
      cerr << "Stack empty!!" << endl;
  }

  return 0;
}
