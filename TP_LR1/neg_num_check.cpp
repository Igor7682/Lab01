
#include "Header.h"



bool neg_num_check(int first, int last) //проверка на отрицательные элементы
{

	if (last - first < 3)
	{
		if (last == -1 && first == -1)
		{
			cout << endl << "No negative elements" << endl;
		}
		else
		{
			if (last - first == 1)
			{
				cout << endl << "Negative elements placed one after another" << endl;
			}
			else
			{
				if (last - first == 2)
				{
					cout << endl << "Only one number betbeen firt end last negative elements" << endl;
				}
				else {
					cout << endl << "Only one negative element" << endl;
				}
			}
		}
		cout << "Need two negative numbers and at least two elements between them" << endl;

		return false;
	}
	else
	{
		return true;
	}
}