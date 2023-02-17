#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	for (int i = 0; i<n;i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % (80 - 70 + 70)
			unique = true;
			for (int j = 0; j<i;j++)
				if (arr[i] == arr[j])
				{
					unique = false
					break;
				}
		} while (!unique);
	}

}