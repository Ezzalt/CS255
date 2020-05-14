//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 9
// Due date: 04/17/2020
// Collaborators: NA
// Resources: NA
// Description: Implementation for linked list class
//------------------------------------------------------------------------------
#include<iostream>
#include "link.h"

using namespace std;

//------------------------------------------------------------------------------
/* intLink() - default constructor
*/
intLink :: intLink()
{
	head = NULL;
	size = 0;
}

//------------------------------------------------------------------------------
/* intLink(const intLink& copy) - copy constructor
	input - const intLink& copy - reference to list for copying value
*/

intLink :: intLink(const intLink& copy)
{
	node * c1, * c2;
	c1 = copy.head;
	head = copy.head;
	c2 = head;
	
	while(c1 != NULL)
	{
	 	c2->data = c1->data;
	 	c2->next = c1->next;
	 	
	 	c2 = c2->next;
	 	c1 = c1->next;
	}
}

//------------------------------------------------------------------------------
/* ~intLink() - denstructor for garbage collection
*/
intLink :: ~intLink()
{
	node *nextNode;
	
	while(head != NULL)
	{
		nextNode = head->next;
		delete head;
		head = nextNode;
	}
}

//------------------------------------------------------------------------------
/* addNode() - add nodes to the Linked List
	input - int value - value for the node to be added
	output - bool value based on success of allocation of new Node
*/
bool intLink :: addNode(int value)
{
	bool success = false;
	node *newNode;
	newNode = new (std::nothrow) node;
	
	if (newNode != NULL)
	{
		newNode->data = value;
		newNode->next = head;
		head = newNode;
		success = true;
		size++;
	}
	
	return success;
}

//------------------------------------------------------------------------------
/* searchNode() - search nodes in the Linked List according to the value
	input - int value - value for the node to be searched
	output - bool value based on success of search of Node
*/
bool intLink :: searchNode(int value)
{
	bool success = false;
	node* current;
	
	if(!emptyList())
	{
		current = head;
		
		while(current != NULL)
		{
			if(current->data == value)
			{
				success = true;
				break;
			}
			else
				current = current->next;
			
		}
	}	
	return success;
}

//------------------------------------------------------------------------------
/* delNode() - delete nodes from the Linked List
	input - int value - value for the node to be deleted
	output - bool value based on success of deletion of Node
*/
bool intLink :: delNode(int value)
{
	bool deleted = false;
	node* current; node* temp;
	
	if (!emptyList() && searchNode(value))//check if Node is present in List
	{
		
		if(head->data == value)//If node is the head node
		{
			temp = head;
			head = head->next;
			delete temp;
			deleted = true;
		}
		else//Any other node value
		{
			current = head;
			while(current != NULL)
			{	
				if(current->next->data == value)
				{	
					temp = current->next;
					current->next = temp->next;
					delete temp;
					deleted = true;
					break;
				}		
				else
					current = current->next;
			}
		}
		
	}
	return deleted;
}


//------------------------------------------------------------------------------
/* listSize() - return the size of the Linked List
	output - unsigned int size - the size or length of the list
*/
unsigned int intLink :: listSize() const
{
	return size;
} 

//------------------------------------------------------------------------------
/* emptyList() - check if the list is empty
	output - bool value based on if list is empty or not
*/
bool intLink :: emptyList() const
{
	return(head == NULL);
}

//------------------------------------------------------------------------------
/* displayList() - print the Linked List to console
*/
void intLink :: displayList() const
{
	node *current;
	
	current = head;
	while(current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

//------------------------------------------------------------------------------
/* operator=(const intLink& assigned) - assign incoming value to new linked list
	input - const intLink& assigned - value to be assigned
	output - reference pointer to the object that has been assigned with value
*/
intLink& intLink :: operator=(const intLink& assigned)
{
	node *c1, *c2;
	c1 = assigned.head;
	head = assigned.head;
	c2 = head;
	
	if(this == &assigned)//self assignment check
		return *this;
		
	else
	{
		while(c1 != NULL)
		{
	 		c2->data = c1->data;
	 		c2->next = c1->next;
	 		
	 		c2 = c2->next;
	 		c1 = c1->next;
		}
	
		return *this;
	}

}
