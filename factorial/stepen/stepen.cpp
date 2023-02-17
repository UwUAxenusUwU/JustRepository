#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "«дравсвтуйте! ¬ведите число и степень, в которую нужно возвести" << endl;
	int a, b;
	cin >> a;
	cin >> b;
	int c = 0, d = a;
	while (c != (b - 1))
	{
		c = c + 1;
		d = d * a;
	}
	cout << d;
}