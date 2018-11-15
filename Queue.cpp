/*********************************************************************
** Program name: Queue.cpp
** Author: Ryan Trapp
** Date: 11/12/2018
** Description: The Queue class contains methods to create and delete QueueNodes
** in a queue data structure represented by a circular linked list, so nodes are
** added at the back of the queue and removed from the front. Function declarations
** are contained in the header file Queue.hpp.
*********************************************************************/
#include <iostream>

#include "Queue.hpp"

Queue::Queue()
{

}

/***********************************************************************************
** First look to see if the Queue has nodes, and if so, loop through and delete each
** node, setting the respective next and previous pointers to NULL.
***********************************************************************************/
Queue::Queue()
{
    head = nullptr;
}

//First look to see if the Queue has nodes, and if so, loop through and delete each
//node, setting the respective next and previous pointers to NULL.
Queue::~Queue()
{
    if (isEmpty())
    {
        return;
    }

    else
    {
        Character* nodePtr = nullptr;

        do
        {

            if (head->getNext() == nullptr)
            {
                delete head;
                head = nullptr;
            }
            else
            {
                nodePtr = head;
                head = head->getNext();
                head->setPrev(nullptr);
                delete nodePtr;
                nodePtr = nullptr;
            }

        } while (!isEmpty());
    }
}

//Function looks to see if Queue is empty considering whether the head pointer is null
//and returns a bool value
bool Queue::isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }

    else
    {
        return false;
    }
}

//Function first looks to see if the Queue is empty, if so,
//it creates a new node and assigns the head pointer to it and set next and previous to null.
//If a head node exists, the function creates a new node and locates the end of the queue via the
//previous pointer at the head node.
void Queue::addBack(int v)
{
    int val = v;

    if (isEmpty())
    {
        head = new Character(val);
        head->setNext(nullptr);
        head->setPrev(nullptr);

        printQueue();
    }

    else
    {

        if (head->getNext() == nullptr && head->getPrev() == nullptr)
        {
            Character* tempPtr = new Character(val);

            tempPtr->setNext(nullptr);
            tempPtr->setPrev(head);
            head->setNext(tempPtr);
            head->setPrev(tempPtr);
        }

        else
        {
            Character* nodePtr = nullptr;
            Character* tempPtr = new Character(val);

            nodePtr = head->getPrev();

            head->setPrev(tempPtr);
            nodePtr->setNext(tempPtr);

            tempPtr->setNext(nullptr);
            tempPtr->setPrev(nodePtr);
        }

        printQueue();
    }
}

//Locates the head node and returns the int value it contains
int Queue::getFront()
{
    if (isEmpty())
    {
        std::cout << std::endl << "Nothing currently in the list" << std::endl;
        return 0;
    }

    else
    {
        Character* nodePtr;
        nodePtr = head;

        return nodePtr->getVal();
    }

}

//The function looks to see if the Queue contains nodes and if so, locates the head node,
//deletes it, and then sets pointer to new head.
void Queue::removeFront()
{

    if (isEmpty())
    {
        std::cout << std::endl << "The list is empty." << std::endl;
    }

    else
    {
        Character* nodePtr = nullptr;

        if (head->getNext() == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            nodePtr = head;
            head = head->getNext();

            head->setPrev(nodePtr->getPrev());
            delete nodePtr;
            nodePtr = nullptr;
        }

        printQueue();

    }
}

//Moves through the list from head to tail, printing the value at each node
void Queue::printQueue()

{
    if (isEmpty())
    {
        std::cout << std::endl << "The list is empty." << std::endl;
    }

    else
    {
        Character* nodePtr = head;

        std::cout << std::endl << "The list is: ";

        do
        {
            std::cout << nodePtr->getVal() << "  ";
            nodePtr = nodePtr->getNext();

        } while (nodePtr != nullptr);

        std::cout << std::endl;
    }

}
