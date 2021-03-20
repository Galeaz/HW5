// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: studentsArray header, array of strings that contains student name, education level and GPA

#include <iostream>
#include <string>
using namespace std;
#pragma once

class studentsArray
{
public:
	//Precondition: N/A
	//Postcondition: the array initializes with 3 static spaces
	studentsArray();

	//Precondition: array of string size 3
	//Postcondition: the array initializes with 3 static spaces with the information given
	studentsArray(string newStudent[]);

	//Precondition: an int to specify the number of spaces needed for the array of strings
	//Postcondition: initializes array of strings with the number of spaces needed
	studentsArray(int newSize);

	//Precondition: an int to specify the number of spaces needed for the array of strings and
	//an array of strings of the same size of the size needed
	//Postcondition: initializes array of strings with the number of spaces needed with the information given
	studentsArray(string newStudent[], int newSize);

	//Precondition: N/A
	//Postcondition: deletes dynamic array
	~studentsArray();

	void display(); // ERASE TESTER **************************************************************************************************

private:
	string *student;
	int size;
};