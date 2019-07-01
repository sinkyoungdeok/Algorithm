#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;
int main()
{
	priority_queue<int> qu;
	int n;
	scanf("%d", &n);
	int a;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a)
			qu.push(a);
		else if (qu.empty())
			printf("0\n");
		else
		{
			printf("%d\n", qu.top());
			qu.pop();
		}


	}
	return 0;
}
