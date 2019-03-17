#include <iostream>
#include <cstdio>
using namespace std;
int num[101][101];
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	while(n--){
		int a, b;
		cin >> a >> b;
		for (int i = a+1; i <= a + 10; i++)
		{
			for (int j = b+1; j <= b + 10; j++)
			{
				if (num[i][j] == 0) {
					num[i][j] = 1;
					sum++;
				}

			}

		}

	}
	cout << sum << endl;

	return 0;
}
