#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int n = 0;
		cin >> n;
		if (n == -1)
			return 0;
		int sum = 0;
		int *num = new int[n];
		int num_i = 0;
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum += i;
				num[num_i++] = i;
			}
			if (n < sum)
				break;
		}
		if (sum == n)
		{
			cout << n << " = 1";
			for (int i = 1; i < num_i; i++)
				cout << " + " << num[i];
			cout << endl;
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}


	}


	return 0;
}
