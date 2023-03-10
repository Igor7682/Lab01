


#include "Header.h"



void part_one_task_two(double* arr, int size) 
{
	double sum = 0;
	int first = 0;
	int last = 0;
	

	first = find_first_neg(arr, size);
	last = find_last_neg(arr, size);


	if (neg_num_check(first, last) == true) //  проверка количества и расположения отрицательных элементов
	{
		sum = sum_btw_neg(arr, size);

		cout << endl << "Sum between first and last negative number is  " << sum << endl
			<< "Coordinats of the first negative nummber " << first << endl
			<< "Coordinats of the last negative nummber " << last << endl;
	}

}