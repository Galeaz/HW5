//Names: Andrew Thompson and Christopher Gomez
//Date: 3/23/2021
//Description: implementation file for the frequency/interger list class
#include "intList.h"

intList::intList()
{
	for (int i = 0; i <= 100; i++)
		freqArray[i] = 0;
}
void intList::addInteger()
{
	int holder;
	holder = inputInteger("\nEnter an integer to add to the list: ",0,100);
	list.push_back(holder);
	freqArray[holder] = freqArray[holder] + 1;
}
void intList::deleteInteger()
{
	if (list.empty())
	{
		cout << "\nThe list is empty!\n";
		return;
	}
	int holder;
	bool removed=false;
	holder = inputInteger("\nDelete an integer: ");
	for (auto it = list.begin(); it != list.end(); ++it)
	{
		if (*it == holder)
		{
			list.remove(holder);
			removed = true;
			freqArray[holder] = 0;
			break;
		}
	}
	if (removed==false)
	{ 
		cout << "\nList does not contain " << holder << '\n';
		return;
	}
}
void intList::dispIntegers() const
{
	cout << "\ncontainer: ";
	if (!list.empty()) {
		for (auto it = list.begin(); it != list.end(); ++it)
			cout << *it << ' ';
		cout << '\n';
		return;
	}
	else
	{
		cout << "Empty\n";
		return;
	}
	
}

void intList::dispFreq() const
{
	if (list.empty())
	{
		cout << "\nThe list is empty!\n";
		return;
	}
	for (int i = 0; i <= 100; i++)
	{
		if (freqArray[i] != 0)
		{
			cout << "\nThe number " << i << " appears " << freqArray[i] << " times\n";
		}

	}
	
}