#include <iostream>
using namespace std;
int main()
{
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	while (n[0] != 0 && n[1] != 0 && n[2] != 0)
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < i; j++)
			{
				if (n[i] < n[j])
				{
					int swap = n[i];
					n[i] = n[j];
					n[j] = swap;
				}
			}
		if (n[2] >= n[0] + n[1])
			cout << "Invalid" << endl;
		else {
			if (n[0] == n[1] && n[1] == n[2])
				cout << "Equilateral" << endl;
			else if (n[0] != n[1] && n[1] != n[2] && n[2] != n[0])
				cout << "Scalene" << endl;
			else
				cout << "Isosceles" << endl;

		}
		cin >> n[0] >> n[1] >> n[2];
	}
	return 0;
}
