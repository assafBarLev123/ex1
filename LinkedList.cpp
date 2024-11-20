#include "LinkedList.h"
#include <iostream>

void addToTheHead(LinkedList*& head, int value) 
{
    LinkedList* temp = new LinkedList;
    temp->value = value;
    temp->Next = head;
    head = temp;
}


void removeTheHead(LinkedList*& head)
{
    if (head != NULL)
    {
        LinkedList* temp = head;
        head = head->Next;
        free(temp);
    }
}