#include "Header.h"


void arr_show(double *arr, int size) //вывод массива
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;
}

void arr_show(int* arr, int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(3) << arr[i];
	}

	cout << endl;
}




