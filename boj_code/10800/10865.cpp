#include <iostream>
#include <cstdio>
using namespace std;
int n, m, a, b, num[100001];
int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		num[a]++;
		num[b]++;
	}
	for (int i = 1; i <= n; i++)
		printf("%d\n", num[i]);

	return 0;
}
