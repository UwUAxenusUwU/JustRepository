#include<iostream>
using namespace std;

int Sum(int a, int b);
int Difference(int a, int b);
int Product(int a, int b);
int Quolient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b; cout << endl;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quolient(a, b) << endl;
	}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
int Quolient(int a, int b)
{
	return a / b;
}