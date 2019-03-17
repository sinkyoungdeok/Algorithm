#include <iostream>
using namespace std;
int main()
{
	long long int n = 0;
	cin >> n;
	long long int before = 5;
	if (n == 1)
		cout << before << endl;
	else {
		for (int i = 2; i <= n; i++)
		{
			before = before + (i * 3) + 1;
			if (before >= 45678)
				before %= 45678;
		}
		cout << before << endl;
	}
	return 0;
}
