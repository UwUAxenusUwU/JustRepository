#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int number; // ������� �����
	int reverse = 0; // �����, ���������� ��������
	cout << "������� �����" << endl; cin >> number;
	int buffer = number;
	int remain[100];
	int i = 0;
	while (buffer % 10 != 0)
	{
		remain[i] = buffer % 10;
		buffer = buffer / 10;
		//cout << "������� ����� " << i 
		//<< " �� ����� " << number << " = " 
		//<< remain[i] << ". ����� = " << buffer << endl; //��� ����� ���������
		i++;
	}
	int min = 0, max = i - 1;
	int n = 0;
	while (min < max)
	{
	
		if (remain[min] == remain[max]) 
		{ 
			n += 2; 
			//cout << "������� �������" << endl; //��� ����� ���������
		};
	//cout << "n = " << n << ", min = " << min << ", max = " << max << endl; //��� ����� ���������
	min++;
	max--;
	};
	if (i % 2 == 1) 
	{
		n = n + 1;
	}
	if (n == i)
		cout << "����� ���������" << endl;
	else
		cout << "����� �� ���������" << endl;
}