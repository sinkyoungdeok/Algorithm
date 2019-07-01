#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int *num = new int[a + b];

	for (int i = 0; i < a + b; i++)
	{
		cin >> num[i];
	}
	sort(num, num + a + b);
	for (int i = 0; i < a + b; i++)
	{
		cout << num[i] << " ";
	}

	return 0;
}
