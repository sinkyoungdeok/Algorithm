#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int> qu;

	int n = 0;
	cin >> n;
	int *num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	unsigned long long int min_sum = 10000000000;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (num[i] - num[j] >= 0)
				sum += num[i] - num[j];
			else
				sum += num[j] - num[i];
		}
		if (min_sum > sum)
		{
			min_sum = sum;
			while (!qu.empty())
				qu.pop();

			qu.push(-num[i]);
		}
		else if (min_sum == sum)
		{
			qu.push(-num[i]);
		}
	}
	cout << -qu.top() << endl;
	return 0;
}
