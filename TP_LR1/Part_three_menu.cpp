#include "Header.h"



void part_three_menu()
{
	ifstream text;

	char word[25];		//проверяемое слово
	char file[100];		//путь к файлу
	char  sym;			//метка для вывода сообщениия об оутствии нужных слов
	bool vow = false;
	
	cout << "This program find words, that begin with vowel letter" << endl;

	while (true)
	{
		cout << "Enter path to the file-> ";

		cin >> file;

		text.open(file);

		if (!text.is_open())
		{
			cout << "Can not open the file" << endl;
		}
		else
		{
			if (text.eof())
			{
				cout << "File is empty" << endl;
				break;
			}

			while (!text.eof())
			{
				text >> word;

				if (vow_check(word))
				{
					if (vow == false)
					{
						cout << "Words, that begin with vowel letter: ";
						vow = true;
					}
					cout << word << " ";

				}
			}
			if (vow == false)
			{
				cout << "No words, that begin with vowel letter";
			}

			text.close();

		}
		vow = false;

		cout << endl << "If you wish to quit, click 'E' or any other key to continue -> "; // выход в главное меню
		cin >> sym;
		if (sym == 'E' || sym == 'e')
		{
			break;
		}
	}
}