#include "Header.h"



void matr_ent(int** matr, int line, int col) //ввод  матрицы
{
	for (int i = 0; i < line; i++) 
	{
		for (int n = 0; n < col; n++)
		{
			cin >> matr[i][n];
		}
		cout << endl;
	}
}