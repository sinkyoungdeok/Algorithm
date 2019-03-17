#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;
int check[10000];
int main()
{
	queue<int> qu;
	int n = 0;
	cin >> n;
	int *num = new int[n];
	int sum = 0;
	int max = -4001;
	int min = 4001;
	int check_numi = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] >= 0)
			check[num[i]]++;
		else
			check[-num[i] + 4000]++;
		sum += num[i];
		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
	int check_max = -1;
	for (int i = 8000; i > 4000; i--)
	{
		if (check_max == check[i])
		{
				qu.push(-(i - 4000));
		}
		else if (check_max < check[i])
		{
			check_max = check[i];

			while (!qu.empty())
				qu.pop();
			qu.push(-(i - 4000));
		}
	}
	for (int i = 0; i < 4001; i++)
	{
		if (check_max == check[i])
		{
			if (i <= 4000)
				qu.push(i);
		}
		else if (check_max < check[i])
		{
			check_max = check[i];

			while (!qu.empty())
				qu.pop();
			qu.push(i);
		}
			
	}
	if (qu.size() >= 2)
		qu.pop();
	sort(num, num + n);
	cout << floor( (double)sum / n +0.5 )<< endl; // 1번
	cout << num[n / 2] << endl; // 2번
	cout << qu.front() << endl;
	cout << max - min << endl; //4번
	return 0;
}
