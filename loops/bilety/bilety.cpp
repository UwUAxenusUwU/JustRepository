#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int number;
	int rebmun = 0;
	int remain[6];
	int i = 0;
	cout << "Введите номер билета" << endl;
	cin >> number;
	rebmun = number;
	while (rebmun % 10 != 0)
	{
		remain[i] = rebmun % 10;
		rebmun = rebmun / 10;
		i++;
	}
	cout << remain[5]<< ", " << remain[4] << ", " << remain[3] << ", " << remain[2] << ", " << remain[1] << ", " << remain[0] << endl;
	if (remain[5] + remain[4] + remain[3] == remain[2] + remain[1] + remain[0])
	{
		cout << "Билет является счастливым" << endl;
	}
	else cout << "Билет НЕ является счастливым" << endl;
}