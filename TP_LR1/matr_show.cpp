#include "Header.h"




void  matr_show(int** matr, int line, int col) //вывод матрицы
{
	for (int i = 0; i < line; i++)
	{
		for (int n = 0; n < col; n++)
		{
			cout << setw(3) << matr[i][n];
		}
		cout << endl;
	}
}