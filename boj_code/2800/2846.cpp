#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[n];

	for (int i = 0; i < n; i++)
		cin >> num[i];
	int left = 0;
	int right = 0;
	left = num[0];
	int max = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (num[i] < num[i + 1])
			right = num[i + 1];
		else
		{
			if (max < right - left)
				max = right - left;
			left = num[i + 1];
		}
	}
	if(right == num[n-1])
		if (max < right - left)
			max = right - left;
	cout << max << endl;
	return 0;
}
