#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a[3];
		scanf("%d:%d:%d", &a[0], &a[1], &a[2]);
		string a_bi[3] = {};
		for (int j = 0; j < 3; j++) {
			int num = 32;
			for (int i = 0; i < 6; i++)
			{
				if (a[j] >= num)
				{
					a[j] -= num;
					a_bi[j].push_back('1');
				}
				else
					a_bi[j].push_back('0');
				num /= 2;
			}
		}
		string sum = a_bi[0] + a_bi[1] + a_bi[2];
		for (int i = 0; i <= 5; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << a_bi[j][i];
		}

		cout <<" "<< sum << endl;

	}
	return 0;
}

