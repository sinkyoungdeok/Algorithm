#include <iostream>
using namespace std;
int main()
{
	int n = 1;
	cin >> n;
	while (n != 0)
	{
		
		int *num = new int[n];
		int *newnum = new int[n];
		int newnum_i = 0;
		for (int i = 0; i < n; i++)
		{
			int check = 0;
			cin >> num[i];
			if (i != 0) {
				if (num[i - 1] == num[i])
					check = 1;
			}
			if (check == 0)
				newnum[newnum_i++] = num[i];

		}
		for (int i = 0; i < newnum_i; i++)
		{
			cout << newnum[i] << " ";
		}
		cout << "$" << endl;
		cin >> n;
	}


	return 0;
}
