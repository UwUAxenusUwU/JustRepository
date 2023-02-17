#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "«дравствуйте! ¬ведите число, факториал которого вы хотите найти." << endl;
	int a;
	cin >> a;
	int c = 0;
	int b = a;
	while (c != (b - 1))
	{
		c = c + 1;
		a = a * (b - c);
	};
	cout << a << endl;
	cout << c << endl;
}