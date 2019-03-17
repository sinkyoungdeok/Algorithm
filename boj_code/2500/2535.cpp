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
	int *check = new int[n + 1];
	int **num = new int*[n + 1];

	for (int i = 1; i <= n; i++)
	{
		check[i] = 0;
		num[i] = new int[n + 1];
		for (int j = 1; j <= n; j++)
			num[i][j] = 0;
	}
	int max = 0;
	int max_a = 0;
	int max_b = 0;
	for (int i = 1; i <= n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		num[a][b] = c;
		if (max < c)
		{
			max = c;
			max_a = a;
			max_b = b;
		}
	}
	cout << max_a << " " << max_b << endl;
	num[max_a][max_b] = 0;
	check[max_a] ++;
	
	max = 0;
	for (int i = 1; i <= n; i++)
	{
		for(int j=1;j<=n;j++)
			if (num[i][j] > max)
			{
				max = num[i][j];
				max_a = i;
				max_b = j;
			}
	}
	cout << max_a << " " << max_b << endl;
	num[max_a][max_b] = 0;
	check[max_a] ++;
	
	while (1)
	{
		max = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				if (num[i][j] > max)
				{
					max = num[i][j];
					max_a = i;
					max_b = j;
				}
		}
		if (check[max_a] == 2)
		{
			num[max_a][max_b] = 0;
			continue;
		}
		else
		{
			cout << max_a << " " << max_b << endl;
			return 0;
		}


	}

	return 0;
}
