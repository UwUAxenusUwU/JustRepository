#include <iostream>
#include <conio.h>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello";
	//cout << "��� ������ ������� Esc ��� ����������� ������� ����� �������";
	//if (_getch() != 27)main();
	int n;
	cout << "������� ����� �����"; cin >> n;
	elevator(n);
}
void elevator(int floor)
{
	if (floor == 0) 
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "� �����\n";
	elevator(floor-1);
	cout << "�� �� " << floor << "� �����\n";
}
