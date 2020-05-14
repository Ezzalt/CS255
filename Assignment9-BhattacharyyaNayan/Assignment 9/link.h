//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 9
// Due date: 04/17/2020
// Collaborators: NA
// Resources: NA
// Description: Header file for linked list class
//------------------------------------------------------------------------------
#ifndef LINK_H
#define LINK_H

//node struct
struct node
{
	int data;
	node *next;
};

//linked list class implementation start
class intLink
{
	public:
		intLink();
		intLink(const intLink& copy);
		~intLink();
		
		bool addNode(int value);
		bool delNode(int value);
		bool searchNode(int value);
		unsigned int listSize() const;
		bool emptyList() const;
		void displayList() const;
		
		intLink& operator=(const intLink& assigned);
		
	private:
		node *head;
		unsigned int size;
};

#endif

