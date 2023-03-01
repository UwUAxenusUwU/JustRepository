#include<iostream>

using namespace std;

#define tab "\t"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
int Sum(T arr[], const int n);
template<typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);


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
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(arr, n) << endl;
	cout << endl << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << endl << endl;

	double i_arr_2[ROWS][COLS];
	int j_arr_2[ROWS][COLS];

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << endl << endl;

	FillRand(j_arr_2, ROWS, COLS);
	Print(j_arr_2, ROWS, COLS);
	cout << endl;
	Sort(j_arr_2, ROWS, COLS);
	Print(j_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(j_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(j_arr_2, ROWS, COLS) << endl;
	cout << endl << endl;

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int y = i; y < ROWS; y++)
			{
				for (int x = y == i ? j + 1 : 0; x < COLS; x++)
				{
					if (arr[y][x] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[y][x];
						arr[y][x] = buffer;
					}
				}
			}
		}
	}
}
template<typename T>
int Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
