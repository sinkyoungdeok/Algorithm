#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	for (int j = 0; j < 3; j++)
	{
		int h1, m1, s1, h2, m2, s2;
		scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
		int sum = 0;
		int r1 = h1 * 3600 + m1 * 60 + s1;
		int r2 = h2 * 3600 + m2 * 60 + s2;
		if (r1 > r2)
			r2 += 3600 * 24;
		int cnt = r2 - r1 + 1;

		for (int i = 0; i < cnt; i++)
		{
			int result = h1 * 10000 + m1 * 100 + s1;
			if (result % 3 == 0)
				sum++;

			s1++;
			if (s1 == 60)
			{
				s1 = 0;
				m1++;
			}
			if (m1 == 60)
			{
				m1 = 0;
				h1++;
			}
			if (h1 == 24)
				h1 = 0;
		}
		cout << sum << endl;
	}
	return 0;
}
