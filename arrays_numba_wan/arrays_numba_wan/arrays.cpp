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

	//���� ��������� ������� � ����������

	cout << "������� �������� ������� (" << n << " ��.:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //���������� � �������� ������� �� ������
	}

 
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������
	for (int i = (n-1); i >= 0; i--)
	{

		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ��������� �������
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "����� ��������� �������: " << summ << endl;
	cout << "������-�������������� ��������� �������: " << (double)summ / n << endl;

	//����� ������������ � ������������� �������� � �������
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
	cout << "����������� �������� �������: " << min << endl;
	cout << "������������ �������� �������: " << max << endl;
#endif

#ifdef arr_homework
	//����� ��������
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, shift_value;
	cout << "������� ��������, �� ������� ����� �������� ������: " << endl; cin >> shift_value;
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