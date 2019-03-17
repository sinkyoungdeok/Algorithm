#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[45];
	num[0] = 0;
	num[1] = 1;
	num[2] = 1;
	if (n == 1)
		cout << num[n] << endl;
	else if (n == 2)
		cout << num[n] << endl;
	else
	{
		for (int i = 3; i <= 45; i++)
		{
			num[i] = num[i - 1] + num[i - 2];
		}
		cout << num[n] << endl;

	}

	return 0;
}

