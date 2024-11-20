#pragma once
#ifndef LinkedList_H
#define LinkedList_H

typedef struct LinkedList
{
	int value;
	LinkedList* Next;
}LinkedList;


void addToTheHead(LinkedList*& head, int value);
void removeTheHead(LinkedList*& head);
#endif