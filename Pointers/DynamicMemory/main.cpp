#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(int** arr, const int rows, const int cols);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);

int* push_front(int arr[], int& n, int value);
int* pop_front(int arr[], int& n);

int* insert(int arr[], int& n, int insert_number, int insert_value);
int* erase(int arr[], int& n, int erase_number);

#define DYNAMIC_MEMORY_1
//#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "¬ведите значение добавл€емого элемента: "; cin >> value;
	cout << "Push Back: ";
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "Pop Back: ";
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "Push Front: ";
	arr = push_front(arr, n, value);
	Print(arr, n);
	cout << "Pop Front: ";
	arr = pop_front(arr, n);
	Print(arr, n);
	int insert_number, insert_value;
	cout << "¬ведите индекс числа, которое нужно вставить: "; cin >> insert_number;
	cout << "¬ведите число, которое нужно вставить: "; cin >> insert_value;
	arr = insert(arr, n, insert_number, insert_value);
	Print(arr, n);
	int erase_number;
	cout << "¬ведите индекс числа, которое нужно стереть: "; cin >> erase_number;
	arr = erase(arr, n, erase_number);
	Print(arr, n);
	delete[] arr;
#endif 

#ifdef DYNAMIC_MEMORY_2
	int rows, cols;
	cout << "¬ведите количество строк: "; cin >> rows;
	cout << "¬ведите количество элементов строки: "; cin >> cols;

	//1) —оздаЄм массив указателей
	int** arr = new int* [rows];
	//2) —оздаЄм строки двумерного массива
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);


	delete[] arr;
#endif
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void FillRand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		// обращение к элементам массива через оператор индексировани€
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int* push_back(int arr[],int& n, int value)
{
	//1)
	int* buffer = new int[n + 1];
	//2)
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)
	delete[] arr;
	//4)
	arr = buffer;
	//5)
	arr[n] = value;
	//6
	n++;
	return arr;
}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n+1];
	for (int i = 0; i < n; i++) buffer[i+1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}
int* insert(int arr[], int& n, int insert_number, int insert_value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < insert_number; i++) buffer[i] = arr[i];
	for (int i = insert_number; i < n; i++) buffer[i+1] = arr[i];
	delete[] arr;
	buffer[insert_number] = insert_value;
	n++;
	return buffer;
}
int* erase(int arr[], int& n, int erase_number)
{
	int* buffer = new int[n - 1];
	for (int i = 0; i < erase_number; i++) buffer[i] = arr[i];
	for (int i = erase_number; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	n--;
	return buffer;
}