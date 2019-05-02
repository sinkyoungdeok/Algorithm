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
		string a, b;
		cin >> a >> b;
		if (a == "E" && b == "E")
			return 0;
		int P1 = 0;
		int P2 = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i])
			{
				if (a[i] == 'R')
				{
					if (b[i] == 'S')
						P1++;
					else if (b[i] == 'P')
						P2++;
				}
				else if (a[i] == 'S')
				{
					if (b[i] == 'R')
						P2++;
					else if (b[i] == 'P')
						P1++;

				}
				else
				{
					if (b[i] == 'R')
						P1++;
					else if (b[i] == 'S')
						P2++;
				}

			}
		}
		cout << "P1: " << P1 << endl;
		cout << "P2: " << P2 << endl;

	}
	return 0;
}
