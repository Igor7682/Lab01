#include "Header.h"



void part_two_task_one(int** matr, int line, int col) 
{
	if (matr_neg_check(matr, line, col)) 
	{	
		int* no_neg_lines = new int[line];	//коордиинаты строк без отриицателных элементов
		int n = 0;

		for (int i = 0; i < line; i++)
		{
			if (find_first_neg(matr[i], col) < 0)
			{
				cout << "Product of numbers in line  " << i + 1 << ": " << line_prod(matr[i], col) << endl;
				no_neg_lines[n] = i;
				n++;
			}
			else
			{
				cout << "Product of numbers in line  " << i + 1 << ": " << "-" << endl;
			}

		}

		cout << "Coordinats of the lines without negative  numbers: ";
		
		arr_show(no_neg_lines, n);

		delete[] no_neg_lines;
		no_neg_lines = NULL;
	}
	else
	{
		cout << "There is no lines without negative numbers" << endl;
	}

	

}
 