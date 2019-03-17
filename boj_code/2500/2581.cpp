#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int mincheck = 0;
	int min = 0;
	int sum = 0;
	for (int i = n; i <= m; i++)
	{
		int check = 0;
		if (i == 1)
			check = 1;
		else if (i == 2)
			check == 0;
		else
		{
			for (int j = 2; j < i; j++)
				if (i%j == 0)
					check++;
		}
		if (check < 1) {
			if (mincheck == 0)
			{
				min = i; mincheck = 1;
			}
			//cout << "i" << i << endl;
			sum += i;
		}
	}
	if (mincheck == 0)
		cout << "-1" << endl;
	else
	cout << sum << endl << min << endl;
	
	return 0;
}
