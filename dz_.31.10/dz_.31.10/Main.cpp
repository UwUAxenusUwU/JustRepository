#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	char znak;
	double a, b;

	cout << "��� ����� �������?" << endl;
	cin >> a >> znak >> b;
	if (znak == '+')
		cout << a << '+' << b << '=' << a + b;
	else if (znak == '-')
		cout << a << '-' << b << '=' << a - b;
	else if (znak == '*')
		cout << a << '*' << b << '=' << a * b;
	else if (znak == '/' && b != 0)
		cout << a << '/' << b << '=' << a / b;
	else if (b == 0)
		cout << "�� ���� ������ ������";
	else
		cout << "������ �����";
}