#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int *zenum = new int[10001];
	for (int i = 1; i <= 100; i++)
	{
		zenum[i*i] = i * i;
	}
	int m; int n;
	cin >> m >> n;
	int j = 0;
	int *num = new int[10000];
	int sum = 0;
	for (int i = m; i <= n; i++)
	{
		if (i == zenum[i])
		{
			num[j] = i;
			sum = sum + i;
			j++;
		}
	}
	if (j != 0)
		cout << sum << endl << num[0] << endl;
	else
		cout << "-1" << endl;

	return 0;
}
