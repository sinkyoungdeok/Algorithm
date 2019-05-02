#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char* num1 = new char[100];
		char* num2 = new char[100];
		cin >> num1 >> num2;
		cout << "Distances: ";
		for (int j = 0; num1[j] != NULL; j++)
		{
			if (num1[j] == num2[j])
				cout << "0 ";
			else if (num1[j] < num2[j])
				cout <<  num2[j]- num1[j] << " ";
			else
				cout << 26 + num2[j] - num1[j] << " ";

		}
		cout << endl;

	}
	return 0;
}
