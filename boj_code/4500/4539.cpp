#include <iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number; 
	for(int q=0; q<number;q++) {
		int n = 0;
		cin >> n;
		if (n <= 10)
		{
			cout << n << endl;
			continue;
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
				break;
			}
		}
	}

	return 0;
}
