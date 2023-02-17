#include <iostream>

using namespace std;

//#define arr_classwork
#define arr_homework

void main()
{
	setlocale(LC_ALL, "");
#ifdef arr_calsswork

arr_calsswork	const int n = 5;
	int arr[n] = { };

	//ввод элементов массива с клавиатуры

	cout << "Введите элементы массива (" << n << " шт.:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //обращаемся к элементу массива на запись
	}

 
	//вывод массивы на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вывод массива на экран в обратном порядке
	for (int i = (n-1); i >= 0; i--)
	{

		cout << arr[i] << "\t";
	}
	cout << endl;

	//сумма элементов массива
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма элементов массива: " << summ << endl;
	cout << "Средне-арефметическое элементов массива: " << (double)summ / n << endl;

	//поиск минимального и максимального значения в массиве
	int min = 0; int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
	}
	min = max;
		for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	cout << "Минимальное значение массива: " << min << endl;
	cout << "Максимальное значение массива: " << max << endl;
#endif

#ifdef arr_homework
	//сдвиг элемента
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, shift_value;
	cout << "Введите значение, на которое нужно сдвинуть массив: " << endl; cin >> shift_value;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	if (shift_value > 0)
		for (int i = 0; i < n; i++)
		{
			cout << arr[i - shift_value] << "\t";
		}
	else if (shift_value == 0) 
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
	else (shift_value < 0) 
		;for (int i = 0; i < n; i++)
		{
			cout << arr[i + shift_value] << "\t";
		}
#endif
}