#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	addToTheHead(s->elements, element);
	s->count++;
}

int pop(Stack* s)
{
	if (s->count != 0)
	{
		int temp = s->elements->value;
		removeTheHead(s->elements);
		s->count--;
		return temp;
	}
	else
	{
		s->elements = NULL;
	}
	return -1;
}

void initStack(Stack* s)
{
	s->count = 0;
	s->elements = NULL;
}

void cleanStack(Stack* s)
{
	LinkedList* temp = s->elements;
	if (temp == NULL)
	{
		free(temp);
	}
	else
	{
		LinkedList* nextTemp = temp->Next;
		while (nextTemp != NULL)
		{
			free(temp);
			temp = nextTemp;
			nextTemp = temp->Next;
		}
		free(temp);
	}
}

bool isEmpty(Stack* s)
{
	if (s->elements == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Stack* s)
{
	if (s->elements != NULL)
	{
		return true;
	}
	return false;
}