
#include "Header.h"

int find_last_neg(double* arr, int size)
{

	for (int i = size - 1; i > -1; i--)	//�������� ������������ �������
	{
		if (arr[i] < 0) 
		{
			return i;
		}

	}

	return -1;
}