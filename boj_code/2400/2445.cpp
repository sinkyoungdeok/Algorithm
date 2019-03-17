#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
			cout << "*";
		for (int j = (n - i-1) * 2; j > 0; j--)
			cout << " ";
		for (int j = i; j >= 0; j--)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
			cout << "*";
		for (int j = i * 2; j > 0; j--)
			cout << " ";
		for (int j = n - i; j > 0; j--)
			cout << "*";
		cout << endl;
	}

	return 0;
}
