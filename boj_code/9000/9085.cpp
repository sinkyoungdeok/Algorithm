#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m = 0;
		cin >> m;
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			int a = 0;
			cin >> a;
			sum += a;
		}
		cout << sum << endl;

	}
	return 0;
}
