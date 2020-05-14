//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 9
// Due date: 04/17/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------

#include <iostream>
#include "link.h"
using namespace std;

int main() 
{
	intLink a,b;
	int c = 1;
	unsigned int size = 0;
	cout << "Input into linked list till value is not -1!" << endl;;
	while(c != -1)
	{
		cin >> c;
		if(c != -1 && a.addNode(c))
			cout << "Node Added!" << endl;
		else if (c == -1)
			cout << "Ending node addition" << endl;
		else
			cout << "Memory allocation error!" << endl;
		
	}
	
	if(!a.emptyList())
	{
		cout << "Values are present and list not empty!!" << endl;
		size = a.listSize();
		cout << "size of list is : " << size << endl; 
		cout << "List is : "<< endl;
		a.displayList();
	
		b = a;
		cout << endl << "Now assigning a to b list output:" << endl; 
 		b.displayList();
		
		cout << endl << "Input node value to be deleted: ";
		cin >> c;
			
		if (a.delNode(c))
			cout << "Node value found and node deleted!" << endl;
		else
			cout << "Value not found or list empty!!" << endl;
	
		a.displayList();

	}
	else
		cout << "List is empty as head is NULL..." << endl;
	
	return 0;
}
