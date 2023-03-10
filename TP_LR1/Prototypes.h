#pragma once

#include "Header.h"

using namespace std;


//common
void main_menu();



//part one
void arr_ent(double* arr, int size);
void arr_show(double* arr, int size);
void arr_show(int* arr, int size);
void part_one_task_one(double *arr, int size);
void part_one_task_two(double* arr, int size);
int odd_amount(int size);
double odd_sum(double *arr,int size);
double sum_btw_neg(double* arr, int size);
int find_first_neg(double* arr, int size);
int find_first_neg(int* arr, int size);
int find_last_neg(double* arr, int size);
bool neg_num_check(int first, int last);
double* compress(double* arr, int size);
void part_one_menu();
bool size_check(int size);
//part two
void part_two_menu();
bool matr_size_check(int line, int col);
void matr_ent(int** matr, int line, int col);
void matr_show(int** matr, int line, int col);
bool matr_neg_check(int** matr, int line, int col);
void part_two_task_one(int** matr, int line, int col);
void part_two_task_two(int** matr, int size);
int diag_sum(int** matr, int size, int line, int col);
int diag_sum_max(int** matr, int size);
int line_prod(int* line, int size);


//part three
void part_three_menu();
bool vow_check(char* word);
