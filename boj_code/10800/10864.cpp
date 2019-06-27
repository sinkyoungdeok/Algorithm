#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int *num = new int[n + 1];
	for (int i = 0; i <= n; i++)
		num[i] = 0;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		num[a]++;
		num[b]++;

	}
	for (int i = 1; i <= n; i++)
		cout << num[i] << endl;

	return 0;
}
