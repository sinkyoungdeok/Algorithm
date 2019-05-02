#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	char *a = new char[1001];
	cin >> a;
	for (int i = 0; a[i] != NULL; i++)
	{
		if ('A' <= a[i] && a[i] <= 'C')
		{
			a[i] += 23;
		}
		else
		a[i] -= 3;
	}
	cout << a << endl;

	return 0;
}
