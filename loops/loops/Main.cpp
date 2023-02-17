#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27
//#define WHILE
#define WHILE_2

void main()
{
#ifdef WHILE
	setlocale(LC_ALL, "Rus");
	int i = 0;
	int n;
	cout << "Введите количество операций" << endl; cin >> n;
	while (i < n)
	{
		cout << "Hello Loops" << endl;
		i++;
		cout << "i = " << i << endl;
	}
#endif //while

#ifdef WHILE_2
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите количество операций" << endl; cin >> n;
	while (n--)
	{
		cout << "n = " << n << endl;
	}
#endif

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} 
	while (key != Escape);


}
