#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int cnt = 1;
	int n;
	double inch, second, mile, hour;
	while (1)
	{
		cin >> inch >> n >> second;

		if (n == 0) return 0;
		mile = inch * n*3.1415927 / 12 / 5280;
		hour = second / 3600;

		printf("Trip #%d: %.2lf %.2lf\n", cnt, mile, mile / hour);
		cnt++;

	}
	return 0;
}
