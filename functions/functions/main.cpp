#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistics.h"
#include"Statistics.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << endl << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << endl << endl;

	double i_arr_2[ROWS][COLS];
	int j_arr_2[ROWS][COLS];

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << endl << endl;

	FillRand(j_arr_2, ROWS, COLS);
	Print(j_arr_2, ROWS, COLS);
	cout << endl;
	Sort(j_arr_2, ROWS, COLS);
	Print(j_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(j_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(j_arr_2, ROWS, COLS) << endl;
	cout << endl << endl;

}

