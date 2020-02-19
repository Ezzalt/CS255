#include<iostream>
#include<string>
#include<iomanip>
#include "convertToNum.h"

using namespace std;

int main()
{
  string in;
  long intgerRes = 0;
  double decimal = 0.0d;
  convertToNum converter;

    cout << "Input number in string format or input any letter to quit: ";
    cin >> in;

    if(converter.convert(in))
    {
      intgerRes = converter.getIntValue();
      decimal = converter.getDecValue();

      cout << fixed << setprecision(1);
      cout << endl << "Integer Value of input: " << intgerRes << endl
        << "Double Value of input:" << decimal << endl << endl;

      cout << "Integer addition of value with 10 is : " << (intgerRes + 10)
        << endl << endl;

      cout << "Double multiplication of value with 2 is : " << (decimal * 2)
        << endl << endl;
    }

    else
    {
      cout << "Input letter to end execution" << endl;
    }

}
