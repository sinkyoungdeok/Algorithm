#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int * num = new int[n];
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (m >= num[i])
		{
			check += m / num[i];
			m = m % num[i];
		}
	}
	cout << check << endl;

	return 0;
}
