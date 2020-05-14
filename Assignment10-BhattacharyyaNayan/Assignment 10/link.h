//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 10
// Due date: 04/24/2020
// Collaborators: NA
// Resources: NA
// Description: The template for linked list
//------------------------------------------------------------------------------
#include<iostream>
#ifndef LINK_H
#define LINK_H

using namespace std;


//linked list class implementation start
template<class I>
class link
{
	public:
		link();
		link(const link& copy);
		~link();
		
		bool addNode(I value);
		bool delNode(I value);
		bool searchNode(I value);
		unsigned int listSize() const;
		bool emptyList() const;
		void displayList() const;
		
		link& operator=(const link& assigned);
		
	private:
		struct node
		{	
			I data;
			node *next;
		};
		node *head;
		unsigned int size;
};

//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 9
// Due date: 04/17/2020
// Collaborators: NA
// Resources: NA
// Description: Implementation for linked list class
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
/* link() - default constructor
*/
template<class I>
link<I> :: link()
{
	head = NULL;
	size = 0;
}

//------------------------------------------------------------------------------
/* link(const link& copy) - copy constructor
	input - const link& copy - reference to list for copying value
*/
template<class I>
link<I> :: link(const link& copy)
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
/* ~link() - denstructor for garbage collection
*/
template<class I>
link<I> :: ~link()
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
	input - I value - value for the node to be added
	output - bool value based on success of allocation of new Node
*/
template<class I>
bool link<I> :: addNode(I value)
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
	input - I value - value for the node to be searched
	output - bool value based on success of search of Node
*/
template<class I>
bool link<I> :: searchNode(I value)
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
	input - I value - value for the node to be deleted
	output - bool value based on success of deletion of Node
*/
template<class I>
bool link<I> :: delNode(I value)
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
			size--;
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
					size--;
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
	output - unsigned I size - the size or length of the list
*/
template<class I>
unsigned int link<I> :: listSize() const
{
	return size;
} 

//------------------------------------------------------------------------------
/* emptyList() - check if the list is empty
	output - bool value based on if list is empty or not
*/
template<class I>
bool link<I> :: emptyList() const
{
	return(head == NULL);
}

//------------------------------------------------------------------------------
/* displayList() - print the Linked List to console
*/
template<class I>
void link<I> :: displayList() const
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
/* operator=(const link& assigned) - assign incoming value to new linked list
	input - const link& assigned - value to be assigned
	output - reference pointer to the object that has been assigned with value
*/
template<class I>
link<I>& link<I> :: operator=(const link<I>& assigned)
{
	node *c1, *c2;
	c1 = assigned.head;
	head = new (std::nothrow) node;
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
#endif

