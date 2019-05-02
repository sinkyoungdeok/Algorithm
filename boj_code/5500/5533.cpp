#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int **num = new int*[n];
	int check[3][101] = { 0 };
	for (int i = 0; i < n; i++)
	{
		num[i] = new int[3];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> num[i][j];
			check[j][num[i][j]]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			if (check[j][num[i][j]] == 1)
				sum += num[i][j];

		}
		cout << sum << endl;
	}
	return 0;
}
