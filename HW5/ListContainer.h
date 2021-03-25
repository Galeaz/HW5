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
	ListContainer();
	//forgot to do the destructor, will add it later - minh
	void display() {};
	void clear();
	void resize();
	void pop_Front();
	void readFront();
	void readEnd();
	void front();
	void pop_Back();
	void back();
	void beginIterator();
	void endIterator();
	void printAllElementsBeginEnd();
	void rBegin();
	void rEnd();
	void printAllElementsrBeginrEnd();
	void eraseWithIterator();
	void eraseRange();
	void insertAtIterator() {};
	void swap();
	void sort();
};