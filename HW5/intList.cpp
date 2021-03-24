


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
	if (empty())
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
	}
}
void intList::dispIntegers() const
{
	cout << "\ncontainer: ";
	if (!empty()) {
		for (auto it = list.begin(); it != list.end(); ++it)
			cout << *it << ' ';
		cout << '\n';
	}
	else
		cout << "Empty\n";
}
bool intList::empty() const
{
	if (list.size() == 0)
		return true;
	return false;
}
void intList::dispFreq() const
{
	if (empty())
	{
		cout << "The list is empty!";
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