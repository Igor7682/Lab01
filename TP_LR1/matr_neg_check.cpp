#include "Header.h"



bool matr_neg_check(int** matr, int line, int col) //�������� ������� �� ������������ ��������
{
	for (int i = 0; i < line; i++)
	{
		if (find_first_neg(matr[i], col) < 0) 
		{
			return true;
		}
		
	}
	return false;
}