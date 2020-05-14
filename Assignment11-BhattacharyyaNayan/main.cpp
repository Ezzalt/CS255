//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 11
// Due date: 05/04/2020
// Collaborators: NA
// Resources: NA
// Description: The driver program
//------------------------------------------------------------------------------
#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
    bst a;
    char ch;
    int i = 0;

    cout << "This demonstration is set to work with 5 values but"
        << " the class can be used for however many "
        << " values need" << endl;

    while(i < 5)
    {
        cin >> a;
        i++;
    }

    bst b = a;
    cout << "A in in-order traversal: " << endl;
    cout << a;
    cout << "B (Copied using b = a) in in-order traversal: " << endl;
    cout << b;
    cout << "A in post order traversal: " << endl;
    a.postOrderTraversal();
    cout << "B (Copied using b = a) in pre order traversal: " << endl;
    b.preOrderTraversal();
    cout << "Height of tree A is : " << a.height() << endl;
    if(b == a)
        cout << "Copied tree was successful and == works as well!" << endl;
    cout << "Input value to be searched from A: " ;
    cin >> i;
    if (a.search(i))
    {
        cout << "Item found!!" << endl;
        cout << "Do you want to delete this value(Y/N)?";
        cin >> ch;
        if(ch == 'Y')
        {
            if(a.remove(i))
                cout << "Successfully removed node!" << endl;
            else
                cout << "Remove not successful!" << endl;
        }
    }

    else
    {
        cout << "Item Not Found!!" << endl;
    }
    cout << "After deletions and changes A:" << endl;
    cout << a;
    if (a == b)
        cout << "No changes in A!!";
    else
        cout << "We introduced changes and demonstrate =="
            << " works!!";
    cout << "bst run successfully!!" << endl;
    return 0;
}
