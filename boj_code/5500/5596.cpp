#include <iostream>
using namespace std;
int main()
{
	int num[4];
	int num2[4];
	int sum = 0;
	int sum2 = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> num2[i];
		sum2 += num2[i];
	}
	if (sum > sum2)
		cout << sum << endl;
	else
		cout << sum2 << endl;
	return 0;
}
