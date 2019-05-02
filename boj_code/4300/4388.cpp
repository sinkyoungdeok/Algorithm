#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (1)
	{
		if (a == 0 && b == 0)
			return 0;
		int carry = 0;
		int carry_check = 0;
		while (a||b)
		{
			if (carry + (a % 10) + (b % 10) >= 10)
			{
				carry = 1;
				carry_check++;
			}
			else
				carry = 0;
			a /= 10;
			b /= 10;
		}


		cout << carry_check << endl;
		cin >> a >> b;
	}
	return 0;
}
