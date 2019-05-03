#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while (1)
	{
		long long int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		long long result = 1;
		int	cnt = 0;
		if (a - b < b) cnt = a - b;
		else cnt = b;
		for (int i = 1; i <= cnt; i++)
		{
			result *= a--;
			result /= i;
		}
		cout << result << endl;
	}
	return 0;
}
