#include "Header.h"


double* compress(double* arr, int size) //сжатие масива
{
	double* pCompresArr = new double[size];

	for (int i = 0; i < size; i++) 
	{
		pCompresArr[i] = 0;
	}

	for (int i = 0, n = 0; i < size; i++) 
	{
		if (abs(arr[i]) >= 1) 
		{
			pCompresArr[n] = arr[i];
			n++;
		}
	}

	return pCompresArr;
}