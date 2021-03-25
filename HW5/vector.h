 //Participants:  Duyen Tran and Lincoln Nguyen
 //Date: 03-16-21
 //Description: vector header

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
	//precondition:N/A
	//Postcondition:constructor
	Vector()
	{}

	//precondition:N/A
    //Postcondition: display
	void display();


	//precondition:a vector 
	//Postcondition: Removes all elements from the vector 
	void Clear();

	//precondition: a vector
	//Postcondition:Requests that the vector capacity be at least enough to contain n elements"
	void Reserve();

	//precondition:A vector
	//Postcondition: Resizes the container so that it contains n elements
	void Resize();

	//precondition:dile "input.dat" and a vector
	//Postcondition: Adds a new element at the end of the vector
	void readFile();

	//precondition: A vector not empty
	//Postcondition: Removes the last element in the vector
	void Pop_back();

	//precondition:a vector 
	//Postcondition:Returns a reference to the first element in the vector
	void Front();

	//precondition: A vector not empty
	//Postcondition: Returns a reference to the last element in the vector
	void Back();

	//precondition: A vector not empty
	//Postcondition: Returns a reference to the element at position n in the vector
	void indexAt();

	//precondition: A vector not empty
	//Postcondition:Returns an iterator pointing to the first element in the vector
	void Begin();

	//precondition: A vector not empty
	//Postcondition:Returns an iterator referring to the past - the - end element in the vector
	void End();

	//precondition: A vector not empty
	//Postcondition:Using iterator begin() and end() returns all elements in the vector
	void returnAllElements();

	//precondition: A vector not empty
	//Postcondition:Returns a reverse iterator pointing to the last element in the vector
	void Rbegin();

	//precondition: A vector not empty
	//Postcondition:Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
	void Rend();

	//precondition: A vector not empty
	//Postcondition:Using iterator rbegin() and rend() returns all elements in the vector
	void ReturnEle();

	//precondition: A vector not empty
	//Postcondition:Removes from the vector a single element(using an iterator)
	void Erase();

	//precondition: A vector not empty
	//Postcondition:Removes from the vector a range of elements(using iterators)
	void RangeErase();

	//precondition: A vector
	//Postcondition:Insert a new entry at the iterator
	void Insert();

	//precondition: two vectors
	//Postcondition: Exchanges the content of the container by another vector's content of the same type
	void Swap();

	//precondition: A vector not empty
	//Postcondition: Sorts the vector
	void Sort();
};

//-----------------------------------------------------------------------------------------------------------------

