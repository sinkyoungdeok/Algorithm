#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (n <= 10)
	{
		cout << n << endl;
		return 0;
	}
	int tens = 10;
	while (1)
	{
		if (tens <= n)
		{
			if ((tens / 10) * 5 <= n % tens)
			{
				n /= tens;
				n *= tens;
				n += tens;
			}
			else
			{
				n /= tens;
				n *= tens;
			}
			tens *= 10;
		}

		if (tens >= n)
		{
			cout << n << endl;
			return 0;
		}
	}


	return 0;
}
