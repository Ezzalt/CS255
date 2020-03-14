//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 5
// Due date: 13/03/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------
#include <iostream>
#include "mathVector.h"
using namespace std;

int main()
{
    //variable initialisation
    mathVector add, sub;
    int x = 0, y = 0;
    cout << "Input Values for your first vector: " << endl;
    cin >> x >> y;
    mathVector vec1 = mathVector(x, y);
    cout << "Input Values for your first vector: " << endl;
    cin >> x >> y;
    mathVector vec2 = mathVector(x, y);
    int dotProduct = 0;

    cout << "The two vectors we will use for demonstration: " << endl;
    cout << "<" << vec1.getX() << ", " << vec1.getY()<< "> and "
        << "<" << vec2.getX() << ", " << vec2.getY()<< ">" << endl;

    add = vec1 + vec2;//addition
    cout << "Result of vector addition: " << endl;
    cout << "< " << add.getX() << ", " << add.getY() << ">" << endl;

    sub = vec1 - vec2;//subtraction
    cout << "Result of vector subtration: " << endl;
    cout << "< " << sub.getX() << ", " << sub.getY() << ">" << endl;

    dotProduct = vec1 * vec2;//Dot Product
    cout << "Dot Product: " << dotProduct << endl;

    if (vec1 == vec2)//equality
        cout << "Vectors are equal!" << endl;
    else
        cout << "Vectors are not equal!" << endl;

    return 0;
}
