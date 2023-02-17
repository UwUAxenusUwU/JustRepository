#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27

void main()
{
	setlocale(LC_ALL, "Rus");

	char key;
	int number_of_key;
	do
	{
		key = _getch();
		number_of_key = key;
			switch(int(key))
			{
				case 119: cout << "Движение вперёд" << endl; break;
				case 97: cout << "Движение влево" << endl; break;
				case 100: cout << "Движение вправо" << endl; break;
				case 115: cout << "Движение назад" << endl; break;
				case 32: cout << "Прыжок" << endl; break;
				case 13: cout << "Огонь" << endl; break;
				case 114: cout << "Перезарядка" << endl; break;
				case Escape: cout << "Выход" << endl; break;
			}
	}
	while (key != Escape);
}