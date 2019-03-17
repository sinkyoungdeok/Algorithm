#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int sum = 0;
		int dup = i;
		while (dup)
		{
			sum += dup % 10;
			dup /= 10;
		}
		if (sum + i == n)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}
