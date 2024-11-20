#include "Utils.h"
#include "Stack.h"
#include <iostream>
#define SIZE 10

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* tempS = new Stack;
	initStack(tempS);
	for (i = 0; i < size; i++)
	{
		push(tempS, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(tempS);
	}
}

int* reverse10()
{
	int i = 0;
	int* nums = new int[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, SIZE);
	return nums;
}