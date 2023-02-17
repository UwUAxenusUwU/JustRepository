#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int number; // введёное число
	int reverse = 0; // число, записанное наоборот
	cout << "Введите число" << endl; cin >> number;
	int buffer = number;
	int remain[100];
	int i = 0;
	while (buffer % 10 != 0)
	{
		remain[i] = buffer % 10;
		buffer = buffer / 10;
		//cout << "Остаток номер " << i 
		//<< " от числа " << number << " = " 
		//<< remain[i] << ". Число = " << buffer << endl; //для теста программы
		i++;
	}
	int min = 0, max = i - 1;
	int n = 0;
	while (min < max)
	{
	
		if (remain[min] == remain[max]) 
		{ 
			n += 2; 
			//cout << "Сравнил успешно" << endl; //для теста программы
		};
	//cout << "n = " << n << ", min = " << min << ", max = " << max << endl; //для теста программы
	min++;
	max--;
	};
	if (i % 2 == 1) 
	{
		n = n + 1;
	}
	if (n == i)
		cout << "Число ПОЛИНДРОМ" << endl;
	else
		cout << "Число НЕ полиндром" << endl;
}