#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double num = 0;
	cin >> num;
	while (num!=999)
	{
		double beforenum = num;
		cin >> num;
		if (num != 999)
			printf("%.2f\n", num - beforenum);

	}
	return 0;
}
