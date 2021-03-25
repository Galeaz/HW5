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
	void printAllElementsBeginEnd();
	void rBegin();
	void rEnd();
	void printAllElementsrBeginrEnd();
	void eraseWithIterator();
	void eraseRange();
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
		auto it = List.end();
		cout << "\n\tThe iterator referring to the past-the-end element: " << &it;
	}
}

// KKKKKK
void ListContainer::printAllElementsBeginEnd()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		cout << "\n\tUsing begin() and end(), the vector contains:\n";
		for (list<string>::iterator it = List.begin(); it != List.end(); ++it)
			cout << "\n\t\t" << &it << " (" << *it << ')';
	}
}

// LLLLLLL
void ListContainer::rBegin()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		auto it = List.rbegin();		
		cout << "\n\tThe iterator referring the reverse first element: " << &it << " (" << *it << ")\n";
	}
}

// MMMMMMMM
void ListContainer::rEnd()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		auto it = List.rend();
		cout << "\n\tThe iterator referring to the reverse past-the-end element: " << &it;
	}
}

// NNNNNNN
void ListContainer::printAllElementsrBeginrEnd()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		cout << "\n\tUsing begin() and end(), the vector contains:\n";
		for (auto it = List.rbegin(); it != List.rend(); ++it)
			cout << "\n\t\t" << &it << " (" << *it << ')';
	}
}

// OOOOOO
void ListContainer::eraseWithIterator()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		auto it = List.begin();
		List.erase(it);
		cout << "\n\tAn element after the begin iterator " << &it << " has been removed.\n";
	}
}

// PPPPPPP
void ListContainer::eraseRange()
{
	if (List.empty())
		cout << "\n\t\tThe list is empty.\n";
	else
	{
		auto it1 = List.begin();
		auto it2 = List.end();
		List.erase(it1,it2);
		cout << "\n\tAll elements starting at begin iterator " << &it1 << " and going up to end iterator "
			<< &it2 << " have been removed.\n";
	}
}

// QQQQQQQ


// RRRRRRR


// SSSSSSS
