#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
		char num[61][2];
		char c1 = 'A';
		char c2 = '0';
		for (int i = 0; i < 60; i++)
		{
			num[i][0] = c1++;
			num[i][1] = c2++;
			if (c1 == 'L' + 1)
				c1 = 'A';
			if (c2 == '9' + 1)
				c2 = '0';
		}
		int n;
		cin >> n;
		n += 56;
		cout << num[(n % 60)][0] << num[(n % 60)][1] << endl;
	return 0;
}
