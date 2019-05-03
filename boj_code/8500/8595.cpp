#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	char *num = new char[n];
	cin >> num;
	unsigned long long int sum = 0;
	unsigned long long int mid_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if ('0' <= num[i] && num[i] <= '9')
		{
			mid_sum *= (unsigned long long int)10;
			mid_sum += (unsigned long long int)num[i] - '0';
		}
		else
		{
			sum += (unsigned long long int)mid_sum;
			mid_sum = 0;
		}

	}
	sum += mid_sum;
	cout << sum << endl;
	return 0;
}
