#include <iostream>
using namespace std;
int main()
{
	int *sum = new int[5];
	for (int i = 0; i <= 4; i++)
		sum[i] = 0;
	for (int i = 1; i <= 4; i++)
	{
		int num1 = 0; int num2 = 0;
		cin >> num1 >> num2;
		sum[i] = sum[i-1] + num2 - num1;
		//cout << sum[i] << endl;
	}
	int maxsum = sum[0];
	for (int i = 2; i <= 4; i++)
		if (maxsum < sum[i])
			maxsum = sum[i];
	cout << maxsum << endl;

	return 0;
}
