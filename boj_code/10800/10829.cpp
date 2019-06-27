#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	long long int n = 0;
	int trans[100000];
	int transnum = 2;
	cin >> n;
	int i = 0;
	while (1)
	{
		trans[i] = n % transnum;
		n = n / transnum;
		i++;
		if (n == 1)
		{
			trans[i] = n;
			break;
		}
	}
	for (; i >= 0; i--)
	{
		cout << trans[i];
	}
	return 0;
}
