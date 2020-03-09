//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 4
// Due date: 03/04/2020
// Collaborators: NA
// Resources: NA
// Description: A program to read in a file of integers and process the list of
// 	integers.
//------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
using namespace std;

//function declaration
float meanOfList(const int *, const int);
bool search(const int *, const int, const int);
int evenNumbers(const int *, const int);

//implementation start
/* main() - driver function for the program
*/
int main()
{
	unsigned int size = 0, i = 0;
	int searchNum = 0;

	int *list = NULL;

	ifstream inFile("data.txt");	//data.txt is the input file as per instructed
	if(!inFile)
		cout << "File not found!";	//failure on no data file found
	else
	{
		inFile >> size;
		list = new int[size];

		if(!list)
			cout << "Memory allocation failed!!";	//Memory allocation failure will
																						//proceed to exit from here
		else
		{
			while(inFile >> *(list + i++) && (i < size))	//Populating the list
				;

			cout << "The number of elements in the list is: " << size << endl;
			cout << "Mean of list is: " << meanOfList(list, size) << endl;

			cout << "Input number to be searched: ";
			cin >> searchNum;

			if(search(list, size, searchNum))
				cout << "Number is present in the list!!" << endl;
			else
				cout << "Number is not present in the list!!" << endl;

			cout << "Number of even values: " << evenNumbers(list, size) << endl;
		}

		delete [] list;
	}
	return 0;
}


/* meanOfList(int *list, const int size) - Retrieve the mean of list
		inputs - list - The input list
						 const size - size of list
		Output - mean - float value of mean of list
*/
float meanOfList(const int *list, const int size)
{
	float mean = 0.0f;
	for(int i = 0; i < size; i++)
		mean += *(list + i);
	mean /= size;
	return mean;
}

/* search(int* list, const int size,const int item) - Search item in list
		inputs - list - The input list
						 const size - size of list
						 const item - item to be searched
		Output - valuePresent - bool value to tell if item is present
*/
bool search(const int* list, const int size,const int item)
{
	bool valuePresent = false;
	for(int i = 0; i < size; i++)
	{
		if(*(list + i) == item)
			valuePresent = true;
	}

	return valuePresent;
}

/* evenNumbers(int *list, const int size) - return number of even numbers in
		list
		inputs - list - The input list
						 const size - size of list
		output - even - Number of even values in list
*/
int evenNumbers(const int *list, const int size)
{
	int even = 0;
	for(int i = 0; i < size; i++)
	{
		if(*(list + i) % 2 == 0)
			even++;
	}
	return even;
}

//end of implementation
