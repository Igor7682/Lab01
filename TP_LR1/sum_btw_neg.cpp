

#include "Header.h"

#include "Header.h"



double sum_btw_neg(double* arr, int size) 
{
	double sum = 0;
	int first = find_first_neg(arr, size); //������ ������������� �������
	int last = find_last_neg(arr, size); // ��������� ������������� �������


	for (int i = first  + 1; i < last; i++) 
	{
		sum += arr[i]; //�����
	}

	return sum;
} 

