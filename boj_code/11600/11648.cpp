#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int a = 0;
	cin >> a;
	int check = 0;
	while (a >= 10)
	{
		long long int sum = 1;
		while (a > 0)
		{
			sum *= a % 10;
			a /= 10;
		}
		a = sum;
		check++;
	}
	cout << check << endl;
	return 0;
}
