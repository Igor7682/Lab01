
#include "Header.h"




void part_two_menu() 
{
	const int max_line = 50;
	const int max_col = 50;
	int real_line = 0;
	int real_col = 0;
	char sym;	//символ введеный пользователем

	int** matr = NULL;
	matr = new int* [max_line];

	for (int i = 0; i < max_line; i++) 
	{
		matr[i] = new int[max_col];
	}

	while (true) 
	{
		cout << endl << "Number of lines will be equal to the numberof columns!"; //ввод размеров
		cout << endl << "Enter number of lines and columns, no less then 3 and no more then " << max_line << "-> ";
		cin >> real_line;
		real_col = real_line;
	
		if (matr_size_check(real_line, real_col)) 
		{
			cout << endl << "Enter matrix elements:" << endl;

			matr_ent(matr, real_line, real_col); //ввод  элементов матрицы

			cout << endl << "Entered matrix:" << endl;

			matr_show(matr, real_line, real_col);
			cout << endl;
			while (true) 
			{
				cout << "Choose task:" << endl   //выбор задачи
					<< "1)Calculate product of elements in those lines that do not contain negative elements. Determine the coordinates of such lines;" << endl
					<< "2)Find maximum among the sums of the elements of the diagonals parallel to the main diagonal of the matrix." << endl
					<< "3)All of the above tasks" << endl
					<< "Type 'E' if you want to return" << endl;

				cin >> sym;

				if (sym == 'e' || sym == 'E')
				{
					break;
				}
				else
				{
					if (sym < '1' || sym > '4') //проверка номера задачи
					{
						cout << "Incorrect number of task";
					}
					else
					{

						switch (sym)
						{

						case '1':
							part_two_task_one(matr, real_line, real_col);
							break;
						case '2':
							part_two_task_two(matr, real_line);
							break;
						case '3':
							part_two_task_one(matr, real_line, real_col);
							part_two_task_two(matr, real_line);
							break;
						}
						break;
					}
				}
			}
		}
		else 
		{
			cout << "Size is incorrect";
		}

		cout << endl << "If you wish to quit, click 'E' or any other key to continue -> "; // выход в главное меню
		cin >> sym;
		if (sym == 'E' || sym == 'e')
		{
			break;
		}
	
	}

	for (int i = 0; i < max_line; i++)
	{
		delete matr[i];
		matr[i] = NULL;
	}
	delete[] matr;
	matr = NULL;

}