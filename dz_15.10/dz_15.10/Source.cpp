#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double money;
	cout << "������� �������� �����" << endl; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
}