#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	while (1)
	{
		cin >> a;
		if (a == 0)
			return 0;

		while (a / 10 != 0)
		{
			cout << a << " ";
			int sum = 1;
			while (a != 0)
			{
				sum *= a % 10;
				a /= 10;
			}
			a = sum;

		}
		cout << a << endl;


	}
	return 0;
}
