// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: list implementation

#include "list.h"
//Added studentArray for use in the list


struct LinkedList::ListNode
{
studentsArray array;           // The students info (object) in this node
struct ListNode* next;  // To point to the next node
};

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::push_back(studentsArray student)
{
    ListNode* newNode;  // To point to a new node
    ListNode* nodePtr;  // To move through the list

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->array = student;
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
    delete newNode; // test this **************************************************************************
}

void LinkedList::display() const
{
    ListNode* nodePtr;  // To move through the list

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr points to a node, traverse
    // the list.
    while (nodePtr)
    {
        // Display the value in this node.
        //cout << nodePtr->array << endl;

        // Move to the next node.
        nodePtr = nodePtr->next;
    }
}

void LinkedList::insertNode(studentsArray student)
{
    ListNode* newNode;					// A new node
    ListNode* nodePtr;					// To traverse the list
    ListNode* previousNode = nullptr;	// The previous node

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->array = student;

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
        /*while (nodePtr != nullptr && nodePtr->array < student)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }*/

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

void LinkedList::deleteNode(studentsArray student)
{
    ListNode* nodePtr;       // To traverse the list
    ListNode* previousNode = nullptr;  // To point to the previous node

    // If the list is empty, do nothing.
    if (!head)
        return;

    // Determine if the first node is the one.
    /*if (head->array == student)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }*/
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value member is 
        // not equal to num.
        /*while (nodePtr != nullptr && nodePtr->array != student)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }*/

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

LinkedList::~LinkedList()
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