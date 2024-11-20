#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	q->_elements = new int[size];
	q->_maxSize = size;
	for (i = 0; i < size; i++)
	{
		q->_elements[i] = NULL;
	}
}

void cleanQueue(Queue* q)
{
	delete[] q->_elements;
	q->_elements = NULL;
	q->_maxSize = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;
	for (i = 0; i < q->_maxSize; i++)
	{
		if (q->_elements[i] ==  NULL)
		{
			q->_elements[i] = newValue;
			i = q->_maxSize;
		}
	}
}

int dequeue(Queue* q)
{
	int temp = -1;
	int i = 0;
	for (i = 0; i < q->_maxSize; i++)
	{
		if (q->_elements[i] != NULL)
		{
			temp = q->_elements[i];
			q->_elements[i] = NULL;
			i = q->_maxSize;
		}
	}
	return temp;
}

bool isEmpty(Queue* s)
{
	int i = 0;
	for (i = 0; i < s->_maxSize; i++)
	{
		if (s->_elements[i] != NULL)
		{
			return false;
		}
	}
	return true;
}

bool isFull(Queue* s)
{
	int i = 0;
	for (i = 0; i < s->_maxSize; i++)
	{
		if (s->_elements[i] == NULL)
		{
			return false;
		}
	}
	return true;
}