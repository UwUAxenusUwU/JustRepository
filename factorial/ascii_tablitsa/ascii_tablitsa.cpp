#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0, b = 0;
	while (i <= 255)
	{
		b = b + 1;
		cout << (char)i << "\t";
		i = i + 1;
		if (b % 16 == 0) { cout << endl; }
	}
}