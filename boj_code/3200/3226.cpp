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
	int n;
	cin >> n;
	int sum = 0;
	while (n--)
	{
		int h, m, cnt;
		scanf("%d:%d %d", &h, &m, &cnt);

		for (int i = 0; i < cnt; i++)
		{
			if (7 <= h && h<19)
				sum += 10;
			else if ((19 <= h &&h <=23) || (0 <= h && h < 7))
				sum += 5;

			m++;
			if (m == 60)
			{
				h++;
				m = 0;
			}
			if (h == 24)
			{
				h = 0;
			}
		}

	}
	cout << sum << endl;
	return 0;
}
