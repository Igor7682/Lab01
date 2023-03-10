#include "Header.h"


bool matr_size_check(int line, int col) //проверка размера
{
	if (line != col) 
	{
		return  false;
	}
	else 
	{
		if (line < 3) 
		{
			return false;
		}
		else 
		{
			return true;
		}
	}
}