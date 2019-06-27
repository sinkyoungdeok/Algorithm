#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum += b % a;
	}
	cout << sum << endl;
	return 0;
}
