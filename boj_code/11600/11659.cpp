#include <iostream>
#include <cstdio>
using namespace std;
int num[100001];
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	scanf("%d", &num[1]);
	for (int i = 2; i <= a; i++)
	{
		scanf("%d", &num[i]);
		num[i] += num[i - 1];
	}
	for (int i = 0; i < b; i++)
	{
		int c, d;
		scanf("%d %d", &c, &d);
		printf("%d\n", num[d ] - num[c - 1]);

	}


	return 0;
}
