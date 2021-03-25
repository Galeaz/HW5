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

	//Precondition: a listContainer object
	//Postcondition: clear all of the private members
	~ListContainer();

	//Precondition: a listContainer object
	//Postcondition: Print the element
	void display() ;

	//Precondition: a listContainer object
	//Postcondition: delete all element in size a list
	void clear();

	//Precondition: a listContainer object
	//Postcondition: set size for a list
	void resize();

	//Precondition: a listContainer object
	//Postcondition: delete the element on the top of the list
	void pop_Front();

	//Precondition: a listContainer object
	//Postcondition: read data from the file and input it in front of the list
	void readFront();

	//Precondition: a listContainer object
	//Postcondition: read data from the file and input it in the back of the list
	void readEnd();

	//Precondition: a listContainer object
	//Postcondition: print the first element of a list
	void front();

	//Precondition: a listContainer object
	//Postcondition: delete the element at the back of the list
	void pop_Back();

	//Precondition: a listContainer object
	//Postcondition: print the element at the back of the list
	void back();

	//Precondition: a listContainer object
	//Postcondition: return the pointer to the first element of the list
	void beginIterator();

	//Precondition: a listContainer object
	//Postcondition: return the poiner to the last element of the list
	void endIterator();

	//Precondition: a listContainer object
	//Postcondition: print all element inside the list using begin() and end() function
	void printAllElementsBeginEnd();
	//Precondition: a listContainer object
	//Postcondition: returns a reverse iterator pointing to the end of the list
	void rBegin();
	//Precondition: a listContainer object
	//Postcondition: returns a reverse iterator pointing to the element before the front of the list
	void rEnd();

	//Precondition: a listContainer object
	//Postcondition: print all element inside the list using rbegin() and rend() function
	void printAllElementsrBeginrEnd();

	//Precondition: a listContainer object
	//Postcondition: delete an element after the pointer
	void eraseWithIterator();

	//Precondition: a listContainer object
	//Postcondition: delete the elements at the beginning of the iterator to the end of the iterator
	void eraseRange();

	//Precondition: a listContainer object
	//Postcondition: insert an element to where the pointer is pointing
	void insertAtIterator();

	//Precondition: a listContainer object
	//Postcondition: swap the data between 2 lists
	void swap();

	//Precondition: a listContainer object
	//Postcondition: sort the data in a list
	void sort();
};