#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int m = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum += m;
	}
	cout << (sum - n) + 1 << endl;

	return 0;
}
