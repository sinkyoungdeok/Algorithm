#include <cstdio>
#include <algorithm>
using namespace std;
int num[10001];
int main() 
{
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int n;
		scanf("%d", &n);
		num[n]++;
	}
	for (int i = 1; i < 10001; i++)
	{
		while (num[i])
		{
			printf("%d\n", i);
			num[i]--;
		}
	}

	return 0;
}
