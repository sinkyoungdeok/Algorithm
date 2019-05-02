#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0)
		{
			return 0;
		}

		char **num = new char*[a+2];
		for (int i = 0; i < a + 2; i++)
		{
			num[i] = new char[b + 2];
		}

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
				cin >> num[i][j];
		}
		for (int i = 0; i < b + 2; i++)
		{
			num[0][i] = 0;
			num[a+1][i] = 0;
		}
		for (int i = 0; i < a + 2; i++)
		{
			num[i][0] = 0;
			num[i][b + 1] = 0;
		}

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				if (num[i][j] == '.')
				{
					int check = 0;
					if (num[i - 1][j-1] == '*')
						check++;
					if (num[i - 1][j] == '*')
						check++;
					if (num[i-1][j + 1] == '*')
						check++;
					if (num[i][j - 1] == '*')
						check++;
					if (num[i ][j+1 ] == '*')
						check++;
					if (num[i +1][j - 1] == '*')
						check++;
					if (num[i + 1][j] == '*')
						check++;
					if (num[i + 1][j + 1] == '*')
						check++;
					num[i][j] = check + '0';
				}
				cout << num[i][j];
			}

			cout << endl;
		}
	}
	return 0;
}
