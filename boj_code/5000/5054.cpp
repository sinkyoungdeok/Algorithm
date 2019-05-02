#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	while (test--)
	{
		int n = 0;
		cin >> n;
		int max = -1;
		int min = 100;
		for (int i = 0; i < n; i++)
		{
			int num = 0;
			cin >> num;
			if (max < num)
				max = num;
			if (min > num)
				min = num;
		}
		cout << (max - min) * 2 << endl;


	}

	return 0;
}
