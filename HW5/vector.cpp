// Participants: Duyen Tran and Lincoln Nguyen
// Date: 03-16-21
// Description: vector implementation
#include <iostream>
#include"vector.h"
#include"input.h"
#include"student.h"
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<iterator>

using namespace std;

//display
void Vector::display()
{
	for (int i = 0; i < v1.size(); i++)
	{
		cout << "[" << i << "]" << v1[i] << endl;
	}
}

// Removes all elements from the vector(which are destroyed
void Vector::Clear()
{
	v1.clear();

	cout << " The vector has been cleared." << endl;
}

//Requests that the vector capacity be at least enough to contain n elements"
void  Vector::Reserve()
{
	int newCapacity = inputInteger("Enter the capacity(1..100):", 1, 100);

	v1.reserve(newCapacity);

	cout << "The vector has been reserved " << v1.capacity() << " elements" << endl;
}

//Resizes the container so that it contains n elements
void  Vector::Resize()
{
	int newSize = inputInteger(" Enter the new size(1..100): ", 1, 100);

	v1.resize(newSize);

	cout << " The vector has been resized to " << v1.size() << " elements." << endl;
}

//Read input.dat and push_back(e) - Adds a new element at the end of the vector
void  Vector::readFile()
{
	ifstream file;
	string name;
	string level;
	string gpa;
	//char trash;
	file.open("input.dat");
	if (file.fail())
	{
		cout << "ERROR: file1.txt does not found.\n";
		exit(1);
	}

	while (!file.eof())
	{
		student temp;
		getline(file, name, ',');
		getline(file, level, ',');
		getline(file, gpa, '\n');
		temp.setName(name);
		temp.setGradeLevel(level);
		temp.setGPA(stod(gpa));
		v1.push_back(temp);
	}

	file.close();
	cout << "\n\tThe vector now has " << v1.size() << " elements.\n";
}

//Removes the last element in the vector
void  Vector::Pop_back()
{
	if (!v1.empty())
	{
		cout << "[" << v1.size() - 1 << "]" << v1.back() << " has been removed from the vector" << endl;

		v1.pop_back();

		cout << "The vector has " << v1.size() << " elements" << endl;

		display();
	}
	else
	{
		cout << "Empty vector!" << endl;
	}


}

//-Returns a reference to the first element in the vector
void  Vector::Front()
{
	if (!v1.empty())
	{
		cout << "The element from the front of the vector: " << "[0]" << v1.front() << endl;
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns a reference to the last element in the vector
void  Vector::Back()
{
	if (!v1.empty())
	{
		cout << "The element from the back of the vector: " << "[" << v1.size() - 1 << "]" << v1.back() << endl;
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns a reference to the element at position n in the vector
void  Vector::indexAt()
{
	if (!v1.empty())
	{
		int position;

		do
		{
			cout << "Enter the index(0.." << v1.size() - 1 << "):";
			cin >> position;

		} while (position < 0 || position > v1.size());

		cout << "vector.at(" << position << ")" << v1.at(position) << endl;
		cout << "vector[" << position << "]" << v1[position] << endl;
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns an iterator pointing to the first element in the vector
void  Vector::Begin()
{
	vector<student>::iterator position = v1.begin();

	if (!v1.empty())
	{
		cout << "The iterator referring the first element: " << &position << " (" << *position << ")" << endl;
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns an iterator referring to the past - the - end element in the vector
void  Vector::End()
{
	vector<student>::iterator position = v1.end();

	if (!v1.empty())
	{
		cout << "The iterator referring to the past-the-end element: " << &position << endl;
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Using iterator begin() and end() returns all elements in the vector
void  Vector::returnAllElements()
{
	vector<student>::iterator position;

	if (!v1.empty())
	{
		cout << " Using begin() and end(), the vector contains:" << endl;

		for (position = v1.begin(); position < v1.end(); position++)
		{
			cout << "\t" << &position << " (" << *position << ")" << endl;
		}
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns a reverse iterator pointing to the last element in the vector
void  Vector::Rbegin()
{
	vector<student>::reverse_iterator positionR = v1.rbegin();
	if (!v1.empty())
	{
		cout << " The reverse iterator pointing to the last element: " << &positionR << "(" << *positionR << ")" << endl;

	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
void  Vector::Rend()
{
	vector<student>::reverse_iterator positionR = v1.rend();
	if (!v1.empty())
	{
		cout << "The reverse iterator pointing to the theoretical element preceding the first element in the vector: " << &positionR << endl;

	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Using iterator rbegin() and rend() returns all elements in the vector
void  Vector::ReturnEle()
{
	vector<student>::reverse_iterator positionR;

	if (!v1.empty())
	{
		cout << "Using rbegin() and rend(), the vector contains reversed elments:" << endl;

		for (positionR = v1.rbegin(); positionR != v1.rend(); positionR++)
		{
			cout << "\t" << &positionR << " (" << *positionR << ")" << endl;
		}
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Removes from the vector a single element(using an iterator)
void  Vector::Erase()
{
	vector<student>::iterator position = v1.begin();
	if (!v1.empty())
	{
		cout << " An element after the begin iterator " << &position + 1 << " has been removed" << endl;
		v1.erase(v1.begin() + 1);
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Removes from the vector a range of elements(using iterators)
void  Vector::RangeErase()
{
	vector<student>::iterator positionBegin = v1.begin();
	vector<student>::iterator positionEnd = v1.end();
	if (!v1.empty())
	{
		cout << " All elements starting at begin iterator " << &positionBegin <<
			" and going up to end iterator " << &positionEnd << "have been removed." << endl;

		v1.erase(v1.begin(), v1.end());
	}
	else
	{
		cout << "Empty vector!" << endl;
	}
}

//Insert a new entry at the iterator
void  Vector::Insert()
{
	student Student;

	string name;
	int gradeOption;
	string gradeLevel;
	double GPA;

	vector<student>::iterator position = v1.begin();

	cout << "Enter a new student name: ";
	cin.ignore(10000, '\n');
	cin.clear();
	getline(cin, name);
	cout << endl;


	gradeOption = inputInteger("Enter the his/her level (1-Freshman, 2-Sophmore, 3-Junior, or 4-Senior): ", 1, 4);
	cout << endl;
	switch (gradeOption)
	{
	case 1: gradeLevel = "Freshman"; break;
	case 2: gradeLevel = "Sophmore"; break;
	case 3: gradeLevel = "Junior"; break;
	case 4: gradeLevel = "Senior"; break;
	}
	cout << "Enter his/her GPA (0.0..4.0):";
	cin >> GPA;
	cout << endl;
	Student.setName(name);
	Student.setGradeLevel(gradeLevel);
	Student.setGPA(GPA);
	position = v1.insert(position + 1, Student);

	cout << "The new element has been inserted after the begin iterator." << endl;
}

// Exchanges the content of the container by another vector's content of the same type
void  Vector::Swap()
{
	cout << "Vector (v2) is initially empty." << endl << endl;
	cout << "Vector (v1) is empty after swapped with vector (v2)." << endl << endl;
	cout << "Vector (v2) after swapped with vector (v1)." << endl << endl;

	swap(v1, v2);

	for (int i = 0; i < v2.size(); i++)
	{
		cout << "[" << i << "]" << v2[i] << endl;
	}
}

// Sorts the vector
void  Vector::Sort()
{
	sort(v1.begin(), v1.end());

	display();
}