#include"Header.h"



void part_two_task_two(int** matr, int size)
{	
	int diag_max = diag_sum_max(matr, size);

	cout << "Maximum among the sums of the elements of the diagonals parallel to the main diagonal of the matrix "
		<< diag_max << endl;

}