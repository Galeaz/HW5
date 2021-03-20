// Participants: Gabriela Lopez and Long Duong
// Date: 03-16-21
// Description: list implementation

#include "list.h"
//Added studentArray for use in the list

LinkedList::LinkedList() : head(NULL)
{}

bool LinkedList::empty() const
{
    return (head == NULL);
}

void LinkedList::clear()
{
    ListNode* currentPtr;
    ListNode* PreviousPtr;
    currentPtr = head;
    PreviousPtr = currentPtr;

    while (currentPtr != NULL)
    {
        PreviousPtr = currentPtr;
        currentPtr = currentPtr->next;
        delete PreviousPtr;
    }
    head = NULL;
}

/*void LinkedList::resize()
{
    int newSize = inputInteger("Enter the new size(1..100): ", 1, 100);

    ListNode* tempPtr;
    tempPtr = head;
    while (tempPtr->next)
        tempPtr = tempPtr->next;
    theArray = NULL;
    theArray = new int[size];
    for (int i = 0; i <= size; i++)
        theArray[i] = theList[i];
}*/

void read(char option)
{

}

void LinkedList::push_back(studentsArray student)
{
    if (head == NULL)
    {
        head = new ListNode;
        head->array = student;
        head->next = NULL;
    }
    else
    {
        ListNode* newNode = new ListNode;
        newNode->array = student;
        newNode->next = NULL;

        ListNode* tempPtr = head;

        while (tempPtr->next != NULL)
            tempPtr = tempPtr->next;

        newNode->next = tempPtr->next;
        tempPtr->next = newNode;
    }
}

void LinkedList::push_front(studentsArray student)
{
    ListNode* newNode = new ListNode;
    newNode->array = student;
    newNode->next = NULL;

    ListNode* currentPtr;
    currentPtr = head;

    newNode->next = currentPtr->next;
    currentPtr->next = newNode;
}

void pop_front();           // checks if list empty and deletes the first node (head)
void pop_back(studentsArray student); // checks if list empty and deletes last node (tail)
void front();               // outputs the head
void back();                // outputs the tail

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