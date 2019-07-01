#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int twos = 1;
		char num[1001];
		cin >> num;
		int sum = 0;
		for (int j = strlen(num) - 1; j >= 0; j--)
		{
			sum += twos * (num[j] - '0');
			twos *= 2;
		}
		cout << sum << endl;

	}
	return 0;
}
