#include"stdafx.h"
#include"Sort.h"

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
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