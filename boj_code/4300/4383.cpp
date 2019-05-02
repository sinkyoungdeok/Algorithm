#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int *check = new int[n];
		int *num = new int[n];
		cin >> num[0];
		for (int i = 0; i < n; i++)
			check[i] = 0;
		for (int i = 1; i < n; i++)
		{
			cin >> num[i];
			if (num[i - 1] - num[i] >= 0)
				check[num[i - 1] - num[i]] = 1;
			else
				check[num[i] - num[i - 1]] = 1;
		}
		int check_ = 0;
		for (int i = 1; i < n; i++)
		{
			if (check[i] == 0)
			{
				cout << "Not jolly" << endl;
				check_ = 1;
				break;
			}

		}
		if (check_ == 0)
			cout << "Jolly" << endl;
	}

	return 0;
}
