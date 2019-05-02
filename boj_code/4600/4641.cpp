#include <iostream>
using namespace std;
int num[15];
int main()
{
	while (1) {
		int check = 0;
		int n;
		int num_i = 0;
		cin >> n;
		if (n == -1) break;
		else if (n == 0) continue;
		else
			num[num_i++] = n;
		while (1)
		{
			cin >> n;
			if (n == 0)
				break;
			else
				num[num_i++] = n;

		}
		for (int i = 0; i < num_i; i++)
		{
			for (int j = 0; j < num_i; j++)
			{
				if (num[i] == num[j] * 2)
					check++;
			}
		}
		cout << check << endl;

	}
	return 0;
}
