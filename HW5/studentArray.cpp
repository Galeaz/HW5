// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: studentsArray implementation

#include "studentsArray.h"

studentsArray::studentsArray() : size(3)
{
	student = new string[size];
	for (int index = 0; index < size; index++)
		student[index] = "Unknown";
}

studentsArray::studentsArray(string newStudent[]) : size(3)
{
	student = new string[size];
	for (int index = 0; index < size; index++)
		student[index] = newStudent[index];
}

studentsArray::studentsArray(int newSize)
{
	size = newSize;
	student = new string[size];
	for (int index = 0; index < size; index++)
		student[index] = "Unknown";
}

studentsArray::studentsArray(string newStudent[], int newSize)
{
	size = newSize;
	student = new string[size];
	for (int index = 0; index < size; index++)
		student[index] = newStudent[index];
}

studentsArray::~studentsArray()
{
	delete[] student;
}

void studentsArray::display()
{
	for (int index = 0; index < size; index++)
		cout << student[index] << '\n';
}

ostream& operator<<(ostream& outs, const studentsArray& aStudent)
{
	outs << '(' << aStudent.student[0] << ", " << aStudent.student[1] << ", " << aStudent.student[2] << ')';
	return outs;
}

void tester() /********************************THIS GOES IN MAIN TO TEST**************************************************/
{
	string student1[3] = { "N","A", "H" };
	string student2[5] = { "N","A", "H", ".","." };
	//studentsArray studentTester;
	//studentsArray studentTester(student1);
	//studentsArray studentTester(5);
	studentsArray studentTester(student2, 5);
	studentTester.display();
}