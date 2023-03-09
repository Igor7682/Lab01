

#include "header.h"
#include "Prototypes.h"

using namespace std;

void part_one_menu() {
	

	const int max_size = 50; 
	int real_size = 0;
	char sym;  //������ �������� �������������
	double* arr = NULL;
	arr = new double[max_size];
	double* comp_arr = NULL; //������ ������

	while (true) 
	{
		cout << endl << "Enter array size no less then 4 and no more then " << max_size << "->";
		
		cin >> real_size;;

		if (size_check(real_size)) //�������� �������
		{
			arr_ent(arr, real_size); //���� ��������� �������

			cout << "Entered array:" << " ";

			arr_show(arr, real_size); //����� ���������� �������
			cout << endl;
			
			while (true)
			{	
				cout << endl << "Choose task:" << endl   //����� ������
					<< "1)Find the  sum of array elements with odd numbers, determine their number and find their coordinates" << endl
					<< "2)Find the sum of the array elements located between the first and last negative elements. Find the positions of the first and last negative elements between which the sum is found" << endl
					<< "3)Compress an array by removing all elements from it whose modulus does not exceed 1" << endl
					<< "4)All of the above tasks" << endl
					<< "Type 'E' if you want to return" << endl;

				cin >> sym;

				if (sym == 'e' || sym == 'E') 
				{
					break;
				}
				else
				{
					if (sym < '1' || sym > '4') //�������� ������ ������
					{
						cout << "Incorrect number of task";
					}
					else
					{

						switch (sym)
						{

						case '1':
							part_one_task_one(arr, real_size); 
							break;
						case '2':
							part_one_task_two(arr, real_size);
							break;
						case '3':
							comp_arr = compress(arr, real_size);
							arr_show(comp_arr, real_size);
							delete[] comp_arr;
							comp_arr = NULL;
							break;
						case '4':
							part_one_task_one(arr, real_size);
							part_one_task_two(arr, real_size);
							comp_arr = compress(arr, real_size);
							arr_show(comp_arr, real_size);
							delete[] comp_arr;
							comp_arr = NULL;
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

		cout << endl << "If you wish to quit, click 'E' or any other key to continue -> "; // ����� � ������� ����
		
		cin >> sym;

		if (sym == 'E' || sym == 'e')
		{
			break;
		}
	}

	delete[] arr; 
	arr = NULL;
}