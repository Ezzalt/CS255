//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 10
// Due date: 04/24/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "link.h"
using namespace std;

void inputInt(link<int>& in);
void inputChar(link<char>& in);
void inputString(link<string>& in);
void inputDouble(link<double>& in);

int main() 
{
	link<int> a;
	link<char> b;
	link<double> c;
	link<string> d;
	
	cout << "Demonstrating integer linked list:" << endl;
	cout << "List termination input is -1" << endl;
	inputInt(a);
	a.displayList();
	cout << endl;
	
	cout << "Demonstrating character linked list:" << endl;
	cout << "List termination input is '!'" << endl;
	inputChar(b);
	b.displayList();
	cout << endl;
	
	cout << "Demonstrating double linked list:" << endl;
	cout << "List termination input is -1" << endl;
	inputDouble(c);
	c.displayList();
	cout << endl;
	
	cout << "Demonstrating string linked list:" << endl;
	cout << "List termination input is 'End'" << endl;
	inputString(d);
	d.displayList();
	cout << endl;
	
	return 0;
}

// The following are functions designed for different types of inputs
// They are basically the same functions with same logic for each data type

void inputInt(link<int>& in)
{
	int c  = 0;
	while(c != -1)
	{
		cin >> c;
		if(c != -1 && in.addNode(c))
			cout << "Node Added!" << endl;
		else if (c == -1)
			cout << "Ending node addition" << endl;
		else
			cout << "Memory allocation error!" << endl;
		
	}
	
}

void inputChar(link<char>& in)
{
	char c  = 0;
	while(c != '!')
	{
		cin >> c;
		if(c != '!' && in.addNode(c))
			cout << "Node Added!" << endl;
		else if (c == '!')
			cout << "Ending node addition" << endl;
		else
			cout << "Memory allocation error!" << endl;
		
	}
}

void inputString(link<string>& in)
{
	string c;
	while(c.compare("End")!= 0)
	{
		cin >> c;
		
		if(c.compare("End") != 0 && in.addNode(c))
			cout << "Node Added!" << endl;
		else if (c.compare("End") == 0)
			cout << "Ending node addition" << endl;
		else
			cout << "Memory allocation error!" << endl;
		
	}
}

void inputDouble(link<double>& in)
{
	double c  = 0;
	while(c != -1)
	{
		cin >> c;
		if(c != -1 && in.addNode(c))
			cout << "Node Added!" << endl;
		else if (c == -1)
			cout << "Ending node addition" << endl;
		else
			cout << "Memory allocation error!" << endl;
		
	}
}

