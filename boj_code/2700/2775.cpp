#include <iostream>
using namespace std;
int main()
{
    int n = 0;
	cin >> n;
	int num[15][15];
	for (int i = 1; i < 15; i++)
	{
		num[0][i] = i;
	}
	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			if (num[i][j] <0)
				num[i][j] = 0;
			for (int k = j; k > 0; k--)
				num[i][j] += num[i - 1][k];
		}
		
	}
	while (n > 0)
	{
		int i = 0; int j = 0;
		cin >> i >> j;
		cout << num[i][j] << endl;
		n--;
	}
	return 0;
}
