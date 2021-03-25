#pragma once

#include <iostream>
#include <list>
#include <iterator>
#include "input.h"
#include <fstream>

class ListContainer
{
private:
	list<string> List;
public:
	ListContainer();
	//forgot to do the destructor, will add it later - minh
	void display();
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
	void printAllElements();
	void rBegin();
};

ListContainer::ListContainer()
{
	List = {};
}
void ListContainer::display()
{
	cout << "\n";
	for (auto i : List)
		cout << "\t\t" << i << "\n";
}

// AAAAAAAAAAAAA
void ListContainer::clear()
{
	List.clear();
	cout << "\n\tThe list has been cleared.\n";
}

// BBBBBBBBBB
void ListContainer::resize()
{
	int size = inputInteger("Enter the new size(1..100): ", 1, 100);
	List.resize(size);
	cout << "\n\tThe list has been resized to " << size << " elements.";
}

// CCCCCCCC
void ListContainer::readFront()
{
	ifstream file;
	string data;

	file.open("input.dat");
	if (file.fail())
	{
		cout << "ERROR: file1.txt does not found.\n";
		exit(1);
	}

	while (!file.eof())
	{
		getline(file, data);
		List.push_front(data);
		if (file.eof())
			break;
	}

	file.close();
	cout << "\n\tThe list now has " << List.size() << " elements.\n";
}

// DDDDDD
void ListContainer::pop_Front()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		cout << "\n\tFirst element " << List.front() << ", has been removed from the list.\n";
		List.pop_front();

		cout << "\n\tThe list now has " << List.size() << " elements.\n";
		display();
	}
}

// EEEEE
void ListContainer::front()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
		cout << "\n\tFirst element from the list is " << List.front() << ".\n";
}

// FFFFFFFF
void ListContainer::readEnd()
{
	ifstream file;
	string data;

	file.open("input.dat");
	if (file.fail())
	{
		cout << "ERROR: file1.txt does not found.\n";
		exit(1);
	}

	while (!file.eof())
	{
		getline(file, data);
		List.push_back(data);
		if (file.eof())
			break;
	}

	file.close();
	cout << "\n\tThe list now has " << List.size() << " elements.\n";
}

// GGGGGGG
void ListContainer::pop_Back()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		cout << "\n\tLast element, " << List.back() << ", has been removed from the list.\n";
		List.pop_back();

		cout << "\n\tThe list now has " << List.size() << " elements.\n";
		display();
	}
}

// HHHHHHH
void ListContainer::back()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
		cout << "\n\tThe last element from the list is (" << List.back() << ")\n";
}

// IIIIIII
void ListContainer::beginIterator()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		list<string>::iterator it = List.begin();
		it++;
		cout << "\n\tThe iterator refering the first element: " << &it << " (" << *it << ")\n";
	}
}

// JJJJJJJ
void ListContainer::endIterator()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		List.push_back("");
		auto it = List.end();
		cout << "\n\tThe iterator referring to the past-the-end element: " << &it;
	}
}

// KKKKKK
void ListContainer::printAllElements()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		cout << "\n\tUsing begin() and end(), the vector contains:\n";
		for (list<string>::iterator it = List.begin(); it != List.end(); ++it)
			cout << '\n' << &it << " (" << *it << ")\n";
	}
}

// LLLLLLL
void ListContainer::rBegin()
{

}