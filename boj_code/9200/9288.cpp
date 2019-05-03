#include <cstdio>
#include <cctype>
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	for (int T = 1; T <= t; T++)
	{
		int check[100] = { 0 };
		int num;
		cin >> num;
		cout << "Case " << T << ":" << endl;

		for (int i = 1; i <= 6; i++)
		{
			for (int j = 1; j <= 6; j++)
			{
				if (i + j == num)
				{
					int sum = 0;
					if (i >= j)
						sum = i * 10 + j;
					else
						sum = j * 10 + i;

					if (check[sum] == 0)
					{
						cout << "(" << i << "," << j << ")" << endl;
						check[sum] = 1;
					}

				}
			}
		}

	}


	return 0;
}
