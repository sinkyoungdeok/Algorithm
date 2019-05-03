#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
		int n = 0;
		cin >> n;
		int *num = new int[n + 1];
		for (int i = 1; i <= n; i++)
			num[i] = 1;

		for (int i = 2; i <= n; i++)
		{
			int mul = i;
			while (mul <= n)
			{
				if (num[mul] == 0)
					num[mul] = 1;
				else
					num[mul] = 0;

				mul += i;
			}
		}
		int check = 0;
		for (int i = 1; i <= n; i++)
			if (num[i] == 1)
				check++;
		cout << check << endl;
	}

	return 0;
}
