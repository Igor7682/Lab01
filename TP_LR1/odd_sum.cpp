
#include "Header.h"

double odd_sum(double *arr,int size) //сумма нечетных элементов
{
	double sum = 0; 

	for (int i = 0; i < size; i++) 
	{

		if (i % 2 != 0)  
		{  
			sum += arr[i];
		}
	}
	return sum;
}