#include "Header.h"

int diag_sum_max(int** matr, int size) //макимум средиии диагоналей
{
	int max_sum = 0;
	int t = 0;

	for (int i = 0, n = 1; n + 1 < size; n++) 
	{
		t = diag_sum(matr, size, i, n);

		if (t > max_sum)
		{
			max_sum = t;
		}
	}

	for (int i = 1, n = 0; i + 1 < size; i++)
	{
		t = diag_sum(matr, size, i, n);

		if (t > max_sum) 
		{
			max_sum = t;
		}
	}

	return max_sum;
}