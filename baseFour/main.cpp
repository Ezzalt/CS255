//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 7
// Due date: 04/03/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------
#include <iostream>
#include "baseFour.h"
using namespace std;

int main()
{
    //variable initialisation
    baseFour num1, num2, result;
    char ch;

    //input
    cin >> num1;
    cin >> num2;

    //selection
    cout << "Input which operation you want >>" << endl;
    cout << "+ for addition" << endl << "- for subtraction" << endl
          << "* for product" << endl << "/ for division: " << endl;
Again:
    cin >> ch;

    switch(ch)
    {
        case '+':
            result = num1 + num2;
            cout << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << result << endl;
            break;
        default:
            cout << "Incorrect choice! Choose again!!!" << endl;
            goto Again;
    }

    num1++;
    ++num2;
    cout << "Postfix num1 use: " << num1 << endl;
    cout << "Prefix num2 use: " << num2 << endl;

    return 0;
}
