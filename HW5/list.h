// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: list header

#ifndef LINKEDLIST
#define LINKEDLIST

#pragma once

#include "studentsArray.h"
#include <iostream>
using namespace std;

template<class T>
class LinkedList
{
private:
    // Declare a structure for the list
    struct ListNode
    {
        T value;           // The value in this node
        struct ListNode* next;  // To point to the next node
    };

    ListNode* head;            // List head pointer

public:
    // Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Destructor
    ~LinkedList();

    // Linked list operations
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void display() const;
};

template<class T>
void LinkedList<T>::appendNode(T value)
{
    ListNode* newNode;  // To point to a new node
    ListNode* nodePtr;  // To move through the list

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = value;
    newNode->next = nullptr;

    // If there are no nodes in the list
    // make newNode the first node.
    if (!head)
        head = newNode;
    else  // Otherwise, insert newNode at end.
    {
        // Initialize nodePtr to head of list.
        nodePtr = head;

        // Find the last node in the list.
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        // Insert newNode as the last node.
        nodePtr->next = newNode;
    }
}

template<class T>
void LinkedList<T>::display() const
{
    ListNode* nodePtr;  // To move through the list

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr points to a node, traverse
    // the list.
    while (nodePtr)
    {
        // Display the value in this node.
        cout << nodePtr->value << endl;

        // Move to the next node.
        nodePtr = nodePtr->next;
    }
}

template<class T>
void LinkedList<T>::insertNode(T value)
{
    ListNode* newNode;					// A new node
    ListNode* nodePtr;					// To traverse the list
    ListNode* previousNode = nullptr;	// The previous node

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = value;

    // If there are no nodes in the list
    // make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else  // Otherwise, insert newNode
    {
        // Position nodePtr at the head of list.
        nodePtr = head;

        // Initialize previousNode to nullptr.
        previousNode = nullptr;

        // Skip all nodes whose value is less than num.
        while (nodePtr != nullptr && nodePtr->value < value)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list,
        // insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else  // Otherwise insert after the previous node.
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

template<class T>
void LinkedList<T>::deleteNode(T value)
{
    ListNode* nodePtr;       // To traverse the list
    ListNode* previousNode = nullptr;  // To point to the previous node

    // If the list is empty, do nothing.
    if (!head)
        return;

    // Determine if the first node is the one.
    if (head->value == value)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value member is 
        // not equal to num.
        while (nodePtr != nullptr && nodePtr->value != value)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list, 
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

template<class T>
LinkedList<T>::~LinkedList()
{
    ListNode* nodePtr;   // To traverse the list
    ListNode* nextNode;  // To point to the next node

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr is not at the end of the list...
    while (nodePtr != nullptr)
    {
        // Save a pointer to the next node.
        nextNode = nodePtr->next;

        // Delete the current node.
        delete nodePtr;

        // Position nodePtr at the next node.
        nodePtr = nextNode;
    }
}
#endif