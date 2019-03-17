#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
using namespace std;

int main()
{
	priority_queue<int> p;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n*n; i++)
	{
		int num;
		scanf("%d", &num);
		p.push(-num);
		if (p.size() > n)p.pop();
	}
	printf("%d\n", -p.top());

	return 0;
}
