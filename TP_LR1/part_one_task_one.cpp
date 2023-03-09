

#include "Header.h"




void part_one_task_one(double* arr, int size)
{
	double sum = 0;
	int amount = 0;


	sum = odd_sum(arr, size); //сумма нечетных элементов
	amount = odd_amount(size); //количество нечетных элементов

	cout << endl << "Sum of the odd numbers->" << setw(3) << sum << endl
		<< "Amount of the odd numbers-> " << setw(2) << amount << endl
		<< "Coordinates of the odd elements->";

	for (int i = 0; i < size; i++) //коордиинаты нечетных элементов
	{
		if (i % 2 != 0)
		{
			cout << setw(2) << i;
		}
	}
}