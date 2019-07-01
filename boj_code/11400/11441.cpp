#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n = 0;
	scanf("%d", &n); 
	int *num = new int[n];
	scanf("%d", &num[0]);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &num[i]);
		num[i] += num[i - 1];
	}
	int m = 0;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 1)
			printf("%d\n", num[b - 1]);
		else
		{
			printf("%d\n", num[b - 1] - num[a - 2]);
		}

	}
	return 0;
}
