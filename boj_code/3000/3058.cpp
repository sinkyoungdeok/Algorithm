#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int *num = new int[7];
		int min2 = 200;
		int sum = 0;
		for (int j = 0; j < 7; j++)
		{
			cin >> num[j];
			if (num[j] % 2 == 0)
			{
				if (min2 > num[j])
					min2 = num[j];
				sum += num[j];
			}
		}


		cout << sum << " " << min2 << endl;

	}

	return 0;
}
