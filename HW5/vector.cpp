// Participants:
// Date: 03-16-21
// Description: vector implementation

#include <iostream>
#include<string>
#include"vector.h"
#include"input.h"
#include"student.h"

using namespace std;


int main()
{
	student s1;
	Vector v;

	string input = "0abcdefghijklmnopqrs";
	char option;

	while (true)
	{
		system("cls");
		cout << endl << "        Vectors are sequence containers representing arrays that can change in size." << endl << endl;
		cout << "        1> Vector's member functions" << endl << "        ";
		for (int i = 0; i < 100; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cout << "                A> clear() - Removes all elements from the vector (which are destroyed)" << endl;
		cout << "                B> reserve(n) - Requests that the vector capacity be at least enough to contain n elements" << endl;
		cout << "                C> resize(n) - Resizes the container so that it contains n elements" << endl;
		cout << "                D> Read input.dat and push_back(e) - Adds a new element at the end of the vector" << endl;
		cout << "                E> pop_back() - Removes the last element in the vector" << endl;
		cout << "                F> front() - Returns a reference to the first element in the vector" << endl;
		cout << "                G > back() - Returns a reference to the last element in the vector" << endl;
		cout << "                H > index using at() or []) - Returns a reference to the element at position n in the vector" << endl;
		cout << "                I > begin() - Returns an iterator pointing to the first element in the vector" << endl;
		cout << "                J > end() Returns an iterator referring to the past - the - end element in the vector" << endl;
		cout << "                K > Using iterator begin() and end() returns all elements in the vector" << endl;
		cout << "                L > rbegin() - Returns a reverse iterator pointing to the last element in the vector" << endl;
		cout << "                M > rend() - Returns a reverse iterator pointing to the theoretical element preceding the first" << "                                      "
			<< "element in the vector" << endl;
		cout << "                N> Using iterator rbegin() and rend() returns all elements in the vector" << endl;
		cout << "                O > erase(it) - Removes from the vector a single element(using an iterator)" << endl;
		cout << "                P > erase(start_it, end_it) - Removes from the vector a range of elements(using iterators)" << endl;
		cout << "                Q> insert(it, entry) - Insert a new entry at the iterator." << endl;
		cout << "                R > swap() - Exchanges the content of the container by another vector's content of the same type" << endl;
		cout << "                S > Sort - Sorts the vector." << endl;
		cout << "        ";
		for (int i = 0; i < 100; i++)
		{
			cout << "_";
		}
		cout << endl;
		cout << "                0> return" << endl;
		cout << "        ";
		for (int i = 0; i < 100; i++)
		{
			cout << char(205);
		}
		cout << endl;

		cout << "                Option: " << endl;
		option = inputChar("", input);
		if (option == '0')
			break;
		switch (toupper(option))
		{
		case 'A':
			v.Clear();
			break;
		case 'B':
			v.Reserve();
			break;
		case 'C':
			v.Resize();
			break;
		case 'D':
			v.readFile();
			break;
		case 'E':
			v.Pop_back();
			break;
		case 'F':
			v.Front();
			break;
		case 'G':
			v.Back();
			break;
		case 'H':
			v.indexAt();
			break;
		case 'I':
			v.Begin();
			break;
		case 'J':
			v.End();
			break;
		case 'K':
			v.returnAllElements();
			break;
		case 'L':
			v.Rbegin();
			break;
		case 'M':
			v.Rend();
			break;
		case 'N':
			v.ReturnEle();
			break;
		case 'O':
			v.Erase();
			break;
		case 'P':
			v.RangeErase();
			break;
		case 'Q':
			v.Insert();
			break;
		case 'R':
			v.Swap();
			break;
		case 'S':
			v.Sort();
			break;
		default:
			cout << "Invalid option" << endl;
		}
		system("pause");
	}

	return 0;
}