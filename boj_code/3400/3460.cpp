#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int a = 0; 
	cin >> a;
	for (int k = 0; k < a; k++)
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
			if (n <= 1)
			{
				trans[i] = n;
				break;
			}
		}
		for (int j = 0; j <= i; j++)
			if (trans[j] == 1)
				cout << j << " ";
	}
	return 0;
}
