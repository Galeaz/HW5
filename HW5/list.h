// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: list header

#ifndef LINKEDLIST
#define LINKEDLIST

#pragma once

#include "studentsArray.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
    struct ListNode;
    ListNode* head;            // List head pointer

public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Linked list operations
    void appendNode(studentsArray student);
    void insertNode(studentsArray student);
    void deleteNode(studentsArray student);
    void display() const;
};

#endif