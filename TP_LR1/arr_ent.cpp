
#include "Header.h"




void arr_ent(double* arr, int size) //ввод  массива
{
	
	cout << "Enter the array's elements:" << endl; 

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}