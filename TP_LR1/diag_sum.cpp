#include "Header.h"



int diag_sum(int** matr, int size, int line, int col)	//сумма элеиентов в диагонали
{
	int sum = 0;

	for (int i = line, n = col; n < size && i < size; i++, n++) 
	{
		sum += matr[i][n];
	} 

	return sum;
}