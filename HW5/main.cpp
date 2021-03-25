// Participants: Gabriela Lopez, Andrew Thompson, Long Duong, Christopher Gomez, Gia Minh Hoang, Duyen Tran and Lincoln Nguyen
// Date: 03-16-21
// Description: Chapter 5 Solution

#include "input.h"
#include "vector.h"
#include "student.h"
#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include "ListContainer.h"
#include "intList.h"

using namespace std;

//Precondition: N/A
//Postcondition: Prints menu and returns user int option selected
int menuOption();

void menu1();
char menu2();
void part2();
void menu3();

int main()
{
	do
	{
		switch (menuOption())
		{
		case 0:  exit(0);
		case 1:  system("cls"); menu1(); break;
		case 2:  system("cls"); part2(); break;
		case 3:  system("cls"); menu3(); break;
		default: cout << "\t\t    ERROR-Invalid Option. Please re-enter."; break;
		}
		cout << '\n';
		system("pause");
	} while (true);
	return 0;
}

int menuOption()
{
	system("cls");
	cout << '\n';
	cout << '\t' << char(201) << string(42, char(205)) << char(187) << '\n';
	cout << '\t' << char(186) << "    \t    CMPR131: Chapter 5             " << char(186) << '\n';
	cout << '\t' << char(186) << "      \t\t  Made by:                 " << char(186) << '\n';
	cout << '\t' << char(186) << " - Gabriela Lopez\t- Andrew Thompson  " << char(186) << '\n';
	cout << '\t' << char(186) << " - Lincoln Nguyen\t- Long Duong       " << char(186) << '\n';
	cout << '\t' << char(186) << " - Christopher Gomez\t- Gia Minh Hoang   " << char(186) << '\n';
	cout << '\t' << char(186) << " - Duyen Tran                             " << char(186) << '\n';
	cout << "\t" << char(204) << string(42, char(205)) << char(185) << "\n";
	cout << "\t" << char(186) << "   1: Vector Container                    " << char(186) << "\n";
	cout << "\t" << char(186) << "   2: List Container                      " << char(186) << "\n";
	cout << "\t" << char(186) << "   3: Application using a List Container  " << char(186) << "\n";
	cout << "\t" << char(199) << string(42, char(196)) << char(182) << "\n";
	cout << "\t" << char(186) << "   0: Exit                                " << char(186) << "\n";
	cout << "\t" << char(200) << string(42, char(205)) << char(188) << "\n";

	int option = inputInteger("\t    Option: ", 0, 3);
	cin.clear();
	return option;
}

char menu2()
{
	
	cout << "\n\t\t2> list's member functions\n";
	cout << '\t'<<string(100, char(205));
	cout << "\n\t\tA. Clear() - Destroys all elements from the list\n";
	cout << "\t\tB. Resize(n) - Changes the list so that it contains n elements\n";
	cout << "\t\tC. Read input.dat and push_front(e) - Adds a new element at the front of the list\n";
	cout << "\t\tD. pop_front() - Deletes the first element\n";
	cout << "\t\tE. front() - Accesses the first element\n";
	cout << "\t\tF. Read input.dat and push_back(e) - Adds a new element at the end of the list\n";
	cout << "\t\tG. pop_back() - Delete the last element\n";
	cout << "\t\tH. back() Accesses the last element\n";
	cout << "\t\tI. begin() - Returns an iterator refereing to the first element in the list\n";
	cout << "\t\tJ. end() Returns an iterator referring to the past-the-end element in the list\n";
	cout << "\t\tK. Using iterator begin() and end() returns all elements in the list\n";
	cout << "\t\tL. rbegin() - Returns a reverse iterator pointing to the last element in the list\n";
	cout << "\t\tM. rend() - Returns a reverse iterator pointing to the element preceding the first element in the list\n";
	cout << "\t\tN. Using iterator rbegin() and rend() returns all elements in the list\n";
	cout << "\t\tO. erase(it) - Removes from the vector a single element(using an iterator)\n";
	cout << "\t\tP. erase(start_it,end_it) - Removes from the vector a range of elements( using iterators)\n";
	cout << "\t\tQ. insert(it, entry) - Insert a new entry at the iterator.\n";
	cout << "\t\tR. swap() - Exchanges the content of the container by another list's content of the same type\n";
	cout << "\t\tS. Sort - Sorts the list.\n";
	cout <<'\t' <<string(100, char(196));
	cout << "\n\t0. return\n";
	cout <<'\t' <<string(100, char(205));
	string str = "abcdefghijklmnopqrs0";
	char option = inputChar("\n\tOption: ", str);

	return option;
}

void part2()
{
	char option;
	ListContainer test;

	while (true)
	{
		option = menu2();

		switch (tolower(option))
		{
		case '0':break;
		case 'a': test.clear(); break;
		case 'b': test.resize(); break;
		case 'c':test.readFront(); break;
		case 'd':test.pop_Front(); break;
		case 'e':test.front(); break;
		case 'f':test.readEnd(); break;
		case 'g':test.pop_Back(); break;

		case 'h': test.back(); break;
		case 'i': test.beginIterator(); break;
		case 'j': test.endIterator(); break;
		case 'k': test.printAllElementsBeginEnd(); break;
		case 'l': test.rBegin(); break;
		case 'm': test.rEnd(); break;
		case 'n': test.printAllElementsrBeginrEnd(); break;
		case 'o': test.eraseWithIterator(); break;
		case 'p': test.eraseRange(); break;
		case 'q': test.insertAtIterator(); break;
		case 'r': test.swap(); break;
		case 's': test.sort(); break;

		default: cout << "\t\t    ERROR-Invalid Option. Please re-enter."; break;

		}
		if (option == '0')
			break;
		cout << "\n\n";
	}
	
}

void menu3()
{
    char choice;
    string allowed = "ABCD0";
    intList f1;
    do
    {
		system("cls");
        cout << "\n3> Application using Vector and/or List container\n";
        cout << string(60, char(205));
        cout << "\n\t  A> Add an integer\n";
        cout << "\t  B> Delete an integer\n";
        cout << "\t  C> Display input integers\n";
        cout << "\t  D> display frequencies of integers\n";
		cout << string(60, char(196)) << '\n';
        cout << "\t  0> return\n";
        cout << string(60, char(205));
        choice = toupper(inputChar("\nOption:", allowed));
        if(choice == '0')
            break;


        switch (choice)
        {
        case('A'): f1.addInteger(); break;
		case('B'): f1.deleteInteger(); break;
        case('C'): f1.dispIntegers(); break;
        case('D'): f1.dispFreq(); break;

        }
		system("pause");
    } while (true);
   return;
}

void menu1()
{
	student s1;
	Vector v;

	string input = "0abcdefghijklmnopqrs";
	char option;

	while (true)
	{
		system("cls");
		cout << endl << "\tVectors are sequence containers representing arrays that can change in size." << endl << endl;
		cout << "\t1> Vector's member functions" << endl << "        ";
		cout << string(100, char(205)) << endl;
		cout << "\t\tA> clear() - Removes all elements from the vector (which are destroyed)" << endl;
		cout << "\t\tB> reserve(n) - Requests that the vector capacity be at least enough to contain n elements" << endl;
		cout << "\t\tC> resize(n) - Resizes the container so that it contains n elements" << endl;
		cout << "\t\tD> Read input.dat and push_back(e) - Adds a new element at the end of the vector" << endl;
		cout << "\t\tE> pop_back() - Removes the last element in the vector" << endl;
		cout << "\t\tF> front() - Returns a reference to the first element in the vector" << endl;
		cout << "\t\tG > back() - Returns a reference to the last element in the vector" << endl;
		cout << "\t\tH > index using at() or []) - Returns a reference to the element at position n in the vector" << endl;
		cout << "\t\tI > begin() - Returns an iterator pointing to the first element in the vector" << endl;
		cout << "\t\tJ > end() Returns an iterator referring to the past - the - end element in the vector" << endl;
		cout << "\t\tK > Using iterator begin() and end() returns all elements in the vector" << endl;
		cout << "\t\tL > rbegin() - Returns a reverse iterator pointing to the last element in the vector" << endl;
		cout << "\t\tM > rend() - Returns a reverse iterator pointing to the theoretical element preceding the first" << "                                      "
			<< "element in the vector" << endl;
		cout << "\t\tN> Using iterator rbegin() and rend() returns all elements in the vector" << endl;
		cout << "\t\tO > erase(it) - Removes from the vector a single element(using an iterator)" << endl;
		cout << "\t\tP > erase(start_it, end_it) - Removes from the vector a range of elements(using iterators)" << endl;
		cout << "\t\tQ> insert(it, entry) - Insert a new entry at the iterator." << endl;
		cout << "\t\tR > swap() - Exchanges the content of the container by another vector's content of the same type" << endl;
		cout << "\t\tS > Sort - Sorts the vector." << endl;
		cout << "        ";
		cout << string(100, char(205)) << endl;
		cout << "\t\t0> return" << endl;
		cout << "        ";
		cout << string(100, char(196)) << endl;
		option = inputChar("Option: ", input);
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
}