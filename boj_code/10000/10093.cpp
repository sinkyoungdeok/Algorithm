#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	unsigned long long int a, b;
	cin >> a >> b;
	if (a > b)
	{
		unsigned long long temp = a;
		a = b;
		b = temp;
	}
	if (a == b)
		cout << "0" << endl;
	else
	cout << b - a - 1 << endl;
	for (unsigned long long int i = a + 1; i < b; i++)
	{
		if (b - 1 == i)
			cout << i;
		else
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
