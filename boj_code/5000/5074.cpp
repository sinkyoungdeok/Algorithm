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
	while (1)
	{
		int h1, m1, h2, m2;
		scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);

		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
			return 0;

		h1 += h2;
		m1 += m2;
		int hcnt = 0;
		if (m1 >= 60)
		{
			h1++;
			m1 -= 60;
		}
		if (h1 >= 24)
		{
			hcnt = h1 / 24;
			h1 %= 24;

		}
		
		printf("%02d:%02d", h1, m1);
		if (hcnt >= 1) 
			printf(" +%d", hcnt);
		cout << endl;
	}
	return 0;
}
