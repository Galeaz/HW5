// Participants:
// Date: 03-16-21
// Description: vector header

#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<iterator>

#include"input.h"
#include"student.h"

using namespace std;

class Vector
{
private:
	vector<student> v1;
	vector<student> v2;

public:
	//Constructor
	Vector()
	{}

	//display
	void display();

	// Removes all elements from the vector(which are destroyed
	void Clear();

	//Requests that the vector capacity be at least enough to contain n elements"
	void Reserve();

	//Resizes the container so that it contains n elements
	void Resize();

	//Read input.dat and push_back(e) - Adds a new element at the end of the vector
	void readFile();

	//Removes the last element in the vector
	void Pop_back();

	//-Returns a reference to the first element in the vector
	void Front();

	//Returns a reference to the last element in the vector
	void Back();

	//Returns a reference to the element at position n in the vector
	void indexAt();

	//Returns an iterator pointing to the first element in the vector
	void Begin();

	//Returns an iterator referring to the past - the - end element in the vector
	void End();

	//Using iterator begin() and end() returns all elements in the vector
	void returnAllElements();

	//Returns a reverse iterator pointing to the last element in the vector
	void Rbegin();

	//Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
	void Rend();

	//Using iterator rbegin() and rend() returns all elements in the vector
	void ReturnEle();

	//Removes from the vector a single element(using an iterator)
	void Erase();

	//Removes from the vector a range of elements(using iterators)
	void RangeErase();

	//Insert a new entry at the iterator
	void Insert();

	// Exchanges the content of the container by another vector's content of the same type
	void Swap();

	// Sorts the vector
	void Sort();
};

//-----------------------------------------------------------------------------------------------------------------
