

#include "Header.h"



int odd_amount( int size) //количество нечетных элементов
{

	int amount = 0; 

	for (int i = 0; i < size; i++) 
	{
		if (i % 2 != 0) 
		{ 
			amount += 1; 
		}
	}
	return amount;

}