#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double money;
	cout << "¬ведите денежную сумму" << endl; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
}