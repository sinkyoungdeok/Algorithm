#include <iostream>
using namespace std;
int main()
{
	int min=100;
	int sum = 0;
	int check = 0;
	for (int i = 0; i < 7; i++)
	{
		int a = 0;
		cin >> a;
		if (a % 2 == 1)
		{
			check = 1;
			if (min > a)
				min = a;
			sum += a;
		}
	}
	if (check == 0)
		cout << "-1" << endl;
	else
	cout << sum << endl << min << endl;
	return 0;
}
