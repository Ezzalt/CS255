//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 7
// Due date: 04/03/2020
// Collaborators: NA
// Resources: NA
// Description: main driver class
//------------------------------------------------------------------------------

#include<iostream>
#include "queue.h"

using namespace std;

int main()
{
	int item = 0;
	char ch;
	queue<int> line;
	queue<char> list;

	line.enqueue(1);
	line.enqueue(2);
	line.enqueue(3);
	line.enqueue(4);
	line.enqueue(5);
	line.enqueue(6);

	while(line.dequeue(item))
	{
		cout << item << endl;
	}

	list.enqueue('P');
	list.enqueue('R');
	list.enqueue('A');
	list.enqueue('C');
	list.enqueue('T');
	list.enqueue('I');
	list.enqueue('C');
	list.enqueue('E');

	while(list.dequeue(ch))
	{
		cout << ch;
	}

	return 0;
}
