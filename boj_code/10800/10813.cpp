#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[n];
	for (int i = 1; i <= n; i++)
	{
		num[i - 1] = i;
	}
	int count = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int a, b;
		cin >> a >> b;

			int swap = num[a - 1];
			num[a - 1] = num[b - 1];
			num[b - 1] = swap;

	}
	for (int i = 0; i < n; i++)
		cout << num[i] << " ";
	cout << endl;
	return 0;
}
