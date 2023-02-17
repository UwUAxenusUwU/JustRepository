#include <iostream>
#include <conio.h>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello";
	//cout << "Для выхода нажмите Esc для продолжения нажмите любую клавишу";
	//if (_getch() != 27)main();
	int n;
	cout << "Введите номер этажа"; cin >> n;
	elevator(n);
}
void elevator(int floor)
{
	if (floor == 0) 
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "м этаже\n";
	elevator(floor-1);
	cout << "Вы на " << floor << "м этаже\n";
}
