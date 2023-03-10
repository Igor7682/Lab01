#include "Header.h"


int line_prod(int* line, int size) //произведение элементов строки
{
	int rez = 1;

	for (int i = 0; i < size; i++) 
	{
		rez *= line[i];
	}

	return rez;
}