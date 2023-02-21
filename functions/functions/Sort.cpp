#include"stdafx.h"
#include"Constants.h"
#include"Sort.h"


void Sort(int arr[], const int n)
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
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
						int buffer = arr[i][j];
						arr[i][j] = arr[y][x];
						arr[y][x] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int interactions = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int y = i; y < ROWS; y++)
			{

				for (int x = y == i ? j + 1 : 0; x < COLS; x++)
				{
					interactions++;
					if (arr[y][x] < arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[y][x];
						arr[y][x] = buffer;
					}
				}
			}
		}
	}
	cout << "Всего интеракций было: " << interactions << " раз." << endl;
}