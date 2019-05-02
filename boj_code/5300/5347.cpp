#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long int a, b;
		cin >> a >> b;
		long long int min_num = min(a, b);
		long long int same_num = 0;
		for (int i = 1; i <= min_num; i++)
		{
			if (a%i == 0 && b%i == 0)
				same_num = i;

		}
		cout << a * b / same_num << endl;

	}
	return 0;
}
