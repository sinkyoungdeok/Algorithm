#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}
