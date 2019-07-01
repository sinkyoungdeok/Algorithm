#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		int check = 0;
		for (int j = a; j <= b; j++)
		{
			int duj = j;
			while (duj != 0)
			{
				if (duj % 10 == 0)
					check++;
				duj /= 10;
			}

		}
		if (a == 0)
			check++;
		cout << check << endl;

	}
	return 0;
}
