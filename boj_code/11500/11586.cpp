#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string *num = new string[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int m = 0;
	cin >> m;
	if (m == 1)
		for (int i = 0; i < n; i++)
			cout << num[i] << endl;
	else if (m == 3)
		for (int i = n - 1; i >= 0; i--)
			cout << num[i] << endl;
	else
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1; j >= 0; j--)
				cout << num[i][j];
			cout << endl;
		}
	return 0;
}
