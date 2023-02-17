#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n);
double power(double a, int b);
int fiba(int count);


void main()
{
	setlocale(LC_ALL, "");
	system("CLS");
	int i;
	cout << "Выберите задание: " << endl << "1 - int factorial(int n)" << endl << "2 - double power(double a, int n)"
		<< endl << "3 - void Fibonacci(???), которая выводит на экран ряд Фибоначчи, до указанного предела;" << endl << "4 - void Fibonacci(???), которая выводит на экран заданное количество чисел из рядa Фибоначчи" << endl; cin >> i;

	switch (i)
	{
	case 1:
		int n;
		cout << "Введите число" << endl; cin >> n;
		cout << "Факториал числа " << n << ": " << factorial(n) << endl;
		break;
	case 2:
		double a; int b;
		cout << "Введите число, которое нужно возвести в степень" << endl; cin >> a;
		cout << "Введите степень числа" << endl; cin >> b;
		cout << "Число " << a << " в степени " << b << ": " << power(a, b) << endl;
		break;
	case 3:
		int limit;
		cout << "Введите предел ряда Фибоначчи" << endl; cin >> limit;
		if (limit == 0) { cout << 0; break; }
		if (limit == 1) { cout << 1; break; }
		for (int count = 1; fiba(count) <= limit; count++)
		{
			cout << fiba(count) << ", ";
		}
		cout << endl;
		break;
	case 4:
		int number;
		cout << "Введите количество чисел из ряда Фибоначчи" << endl; cin >> number;
		for (int count = 1; count <= number; count++)
		{
			cout << fiba(count) << "(" << count << ")" << ", ";
		}
		cout << endl;
		break;
	default:
		cout << "Такого задания нет" << endl;
	}
	cout << "Для выхода нажмите Esc, для продолжения нажмите любую клавишу" << endl;
	if (_getch() != 27)main();
}

int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

double power(double a, int b)
{
	if (b == 0) return 1;
	else if (b > 0) return a * power(a, b - 1);
	else return 1 / a * power(a, b + 1);
}

int fiba(int count)
{
	if (count == 1) return 1;
	if (count <= 0) return 0;
	else
		return (fiba(count - 1) + fiba(count - 2));
}

void fibonacci_number(int number)
{
int f = 0, g = 0, h = 1, j = 0;
	if (number == 0) { cout << 0; return; }
	if (number == 1) { cout << 1; return; }
	else
	{
		while (j < (number - 1))
		{
			cout << f << ", ";
			f = g + h;
			g = h;
			h = f;
			j++;
		}
		return;
	}
}