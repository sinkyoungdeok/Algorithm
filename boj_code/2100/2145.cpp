#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
	while (1)
	{
		int n = 0;
		cin >> n;
		if (n == 0)
			return 0;

		while (n >= 10)
		{
			int sum = 0;
			while (n)
			{
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		cout << n << endl;

	}
	return 0;
}
