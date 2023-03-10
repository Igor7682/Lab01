
#include "Header.h"

int find_first_neg(double* arr, int size) //первый отриательный элемент
{

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] < 0)
		{
			return i;
		}

	}

	return -1;
}

int find_first_neg(int* arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) 
		{
			return i;
		}

	}

	return -1;
}