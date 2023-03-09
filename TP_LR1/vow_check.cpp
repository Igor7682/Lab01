#include "Header.h"


bool vow_check(char* word)
{
	char vow[12] = "EeYyUuOoAa";	//гласные  буквы

	for (int i = 0; i < 12; i++)
	{
		if (word[0] == vow[i])
		{
			return true;
		}
	}
	return false;
}