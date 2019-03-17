#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int **num = new int*[n + 2];
	for (int i = 0; i < n+2; i++)
		num[i] = new int[n + 2];

	for (int i = 0; i < n + 2; i++)
	{
		num[0][i] = 0;
		num[i][0] = 0;
		num[i][n + 1] = 0;
		num[n + 1][i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			char a;
			cin >> a;
			if (a != '.')
				num[i][j] = a - '0';
			else
				num[i][j] = 0;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (num[i][j] != 0)
				cout << "*";
			else {
				int sum = 0;
				sum += num[i][j - 1];
				sum += num[i][j];
				sum += num[i][j + 1];

				sum += num[i + 1][j - 1];
				sum += num[i + 1][j];
				sum += num[i + 1][j + 1];

				sum += num[i - 1][j - 1];
				sum += num[i - 1][j];
				sum += num[i - 1][j + 1];
				if (sum >= 10)
					cout << "M";
				else
				cout << sum;
			}
		}
		cout << endl;
	}

	return 0;
}
