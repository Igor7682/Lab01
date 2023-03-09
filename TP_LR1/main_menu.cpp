
#include "Header.h"


void main_menu()
{

	char exit; //метка для выхода из цикла

	while (true) 
	{


		char choice; //номер семинара
		cout << "Enter number of task from 1 to 3" << endl
		 << " 1. Work with one-dimensional array" << endl
			<< " 2. Work with integer square matrix" << endl
			<< " 3. Work with text file" << endl;
		cin >> choice;
	


		if (choice < '1' || choice > '3') // проверка правиильности ввода  номера семинара
		{
			cout << "Error, enter number in range from 1 to 3" << endl;
			cin >> choice;
		}
		else 
		{

			switch (choice)
			{

			case '1':
				part_one_menu();
				break;
			case '2':
				part_two_menu();
				break;
			case '3':
				part_three_menu();
				break;
			}
		}

		cout << endl << "Type E if you want  to exit, or any key to return to main menu->"; // выход из программы
		cin >> exit;
		if (exit == 'E' || exit == 'e') 
		{
			cout << "Goodbye!";
			break;
		}


	}
}