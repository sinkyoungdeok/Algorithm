#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	int maxm = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		m += a;
		m -= b;
		if (m < 0)
		{
			maxm = 0;
			break;
		}
		if (maxm < m)
			maxm = m;
	}
	cout << maxm << endl;
	return 0;
}
