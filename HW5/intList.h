//Names: Andrew Thompson and Christopher Gomez
//Date: 3/23/2021
//Description: Header file for the frequency/ interger list class
#pragma once
#include <iostream>
#include <list>
#include "input.h"
using namespace std;
class intList
{
private:
	list <int> list;
	int freqArray[101];
public:
	//preconditions:  N/A
	//postconditions: Creates a default intList object
	intList();
	//preconditions:  A intList object 
	//postconditions: returns true if the list is empty, false if it is not
	bool empty() const;
	//preconditions:  A intList object
	//postconditions: adds an input integer into the list
	void addInteger();
	//preconditions:  A intList object
	//postconditions: Deletes a chosen integer from the list
	void deleteInteger();
	//preconditions:  A intList object
	//postconditions: Displays the contents of the list.
	void dispIntegers() const;
	//preconditions:  A intList object
	//postconditions: Displays the frequency of the numbers in the list.
	void dispFreq() const;

};

