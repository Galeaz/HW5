// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: list header

#ifndef LINKEDLIST
#define LINKEDLIST

#pragma once

#include "studentsArray.h"
#include "input.h"
#include <iostream>
using namespace std;

struct ListNode
{
    studentsArray array;
    ListNode* next;
};

class LinkedList
{
private:
    //struct Iterator;

    ListNode* head;            // List head pointer
    ListNode* tail;            // List tail pointer
    int size;

public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Linked list operations 
    bool empty() const;         // Checks if the list is empty

    void clear();               // deletes the list
    void resize();   // changes the size of the list by adding or eliminating elements at the end of it
    void read(char option);     // read file and call the respect function to add items into list (C = backwards, F = normal)
    void push_back(studentsArray student); // checks if list empty and inserts a new node at the tail
    void push_front(studentsArray student); // checks if list empty and inserts a new node at the head
    void pop_front();           // checks if list empty and deletes the first node (head)
    void pop_back(studentsArray student); // checks if list empty and deletes last node (tail)
    void front();               // outputs the head
    void back();                // outputs the tail
    
    // investigate iterators use (options I-Q iterators)

    void swap();                // exchanges the data of the list by another data of a list of the same type
    void sort();                // sorts the list
    
    
    void insertNode(studentsArray student);
    void deleteNode(studentsArray student);
    
    void display() const;
};

/*
template <class Item>
class node_iterator : public iterator<forward_iterator_tag, Item>
{
public:
    node_iterator(node<Item>* initial = NULL)
    {
        current = initial;
    }
    Item& operator *() const
    {
        return current->data();
    }
    node_iterator& operator ++() // Prefix ++
    {
        current = current->link();
        return *this;
    }
    node_iterator operator ++(int) // Postfix ++
    {
        node_iterator original(current);
        current = current->link();
        return original;
    }
    bool operator ==(const node_iterator other) const
    {
        return current == other.current;
    }
    bool operator !=(const node_iterator other) const
    {
        return current != other.current;
    }
private:
    node<Item>* current;
};*/
#endif