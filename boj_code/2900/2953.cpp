#include <iostream>
using namespace std;
int main()
{
	int sum[5] = { 0, };
	for ( int i =0 ; i<5; i++)
		for (int j = 0; j < 4; j++)
		{
			int n = 0;
			cin >> n;
			sum[i] += n;
		}
	int max = 0;
	int maxcheck = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < sum[i])
		{
			max = sum[i];
			maxcheck = i;
		}
	}
	cout << maxcheck+1 << " " << max << endl;
	return 0;
}
