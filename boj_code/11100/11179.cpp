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
	if (n == 1)
	{
		cout << "1" << endl;
	}
	else {
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

		int two = 1;
		long long int sum = 0;
		for (; i >= 0; i--)
		{
			sum += two * trans[i];
			two *= 2;
		}
		cout << sum << endl;
	}
	return 0;
}
