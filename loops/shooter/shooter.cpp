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
				case 119: cout << "�������� �����" << endl; break;
				case 97: cout << "�������� �����" << endl; break;
				case 100: cout << "�������� ������" << endl; break;
				case 115: cout << "�������� �����" << endl; break;
				case 32: cout << "������" << endl; break;
				case 13: cout << "�����" << endl; break;
				case 114: cout << "�����������" << endl; break;
				case Escape: cout << "�����" << endl; break;
			}
	}
	while (key != Escape);
}