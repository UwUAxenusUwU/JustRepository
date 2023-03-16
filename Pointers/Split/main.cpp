#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int even = 0, uneven = 0;
	const int n = 10;
	int arr[n];
	cout << "Получившийся массив: ";
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
		if (arr[i] % 2 == 0)
			even++;
		else 
			uneven++;
	}
	cout << endl;
	cout << "Количество чётных чисел: " << even << endl;
	cout << "Количество нечётных чисел: " << uneven << endl;
	int j = 0, k = 0;
	int* brr = new int[even];
	int* crr = new int[uneven];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			brr[j] = arr[i];
			j++;
		}
		else
		{
			crr[k] = arr[i];
			k++;
		}
	}
	cout << "Чётный массив: ";
	for (int i = 0; i < j; i++)
		cout << brr[i] << "\t";
	cout << endl;
	cout << "Нечётный массив: ";
	for (int i = 0; i < k; i++)
		cout << crr[i] << "\t";
	cout << endl;
}