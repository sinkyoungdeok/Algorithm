#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int *num = new int[10];
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		int a = 0;
		cin >> a;
		int check = 0;
		for (int j = 0; j < i; j++)
		{
			if (num[j] == a % 42)
			{
				check = 1;
			}
		}
		if (check == 0)
		{
			sum++;
			num[i] = a % 42;
		}
		else
			num[i] = 50;

	}
	cout << sum << endl;
	return 0;
}
