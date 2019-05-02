#include <iostream>
#include <cstdio>
using namespace std;
int fac(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n == 3)
		return 6;
	else if (n == 4)
		return 24;
	else
		return 120;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (1)
	{
		if (n == 0)
			break;
		int sum = 0;
		int i = 0;
		while (n != 0)
		{
			sum += (n % 10) * fac(++i);
			n /= 10;
		}
		printf("%d\n", sum);

		scanf("%d", &n);
	}

	return 0;
}
