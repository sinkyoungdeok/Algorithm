#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int money = 0;
		cin >> money;

		if (money >= 25)
		{
			cout << money / 25 << " ";
			money = money % 25;
		}
		else
			cout << "0 ";
		if (money >= 10)
		{
			cout << money / 10 << " ";
			money = money % 10;
		}
		else
			cout << "0 ";
		if (money >= 5)
		{
			cout << money / 5 << " ";
			money = money % 5;
		}
		else
			cout << "0 ";
		if (money >= 1)
		{
			cout << money / 1 << " ";
			money = money % 1;
		}
		else
			cout << "0 ";
		cout << endl;
	}

	return 0;
}
