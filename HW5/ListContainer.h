// Participants: Gabriela Lopez, Gia Minh Hoang and Long Duong
// Date: 03-16-21
// Description: list container header

#pragma once

#include <iostream>
#include <list>
#include <iterator>
#include "input.h"
#include "student.h"
#include <fstream>

class ListContainer
{
private:
	list<student> List;
	list<student> List2;
public:

	//Precondition: N/A
	//Postcondition: creates a default ListContainer
	ListContainer();

	//Precondition: N/A
	//Postcondition: clear all of the private members
	~ListContainer();

	//Precondition: N/A
	//Postcondition: Print the element
	void display() {};

	//Precondition: N/A
	//Postcondition: delete all element in size a list
	void clear();

	//Precondition: N/A
	//Postcondition: set size for a list
	void resize();

	//Precondition: N/A
	//Postcondition: delete the element on the top of the list
	void pop_Front();

	//Precondition: N/A
	//Postcondition: read data from the file and input it in front of the list
	void readFront();

	//Precondition: N/A
	//Postcondition: read data from the file and input it in the back of the list
	void readEnd();

	//Precondition: N/A
	//Postcondition: print the first element of a list
	void front();

	//Precondition: N/A
	//Postcondition: delete the element at the back of the list
	void pop_Back();

	//Precondition: N/A
	//Postcondition: print the element at the back of the list
	void back();

	//Precondition: N/A
	//Postcondition: return the pointer to the first element of the list
	void beginIterator();

	//Precondition: N/A
	//Postcondition: return the poiner to the last element of the list
	void endIterator();

	//Precondition: N/A
	//Postcondition: print all element inside the list using begin() and end() function
	void printAllElementsBeginEnd();

	void rBegin();
	void rEnd();

	//Precondition: N/A
	//Postcondition: print all element inside the list using rbegin() and rend() function
	void printAllElementsrBeginrEnd();

	//Precondition: N/A
	//Postcondition: delete an element after the pointer
	void eraseWithIterator();

	//Precondition: N/A
	//Postcondition: delete the elements at the beginning of the iterator to the end of the iterator
	void eraseRange();

	//Precondition: N/A
	//Postcondition: insert an element to where the pointer is pointing
	void insertAtIterator() {};

	//Precondition: N/A
	//Postcondition: swap the data between 2 lists
	void swap();

	//Precondition: N/A
	//Postcondition: sort the data in a list
	void sort();
};