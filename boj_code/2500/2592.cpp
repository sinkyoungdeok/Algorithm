#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int *num = new int[10];
	int check[1001] = { 0, };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		sum += num[i];
		check[num[i]] ++;
	}
	int max = 0;
	int maxcheck = 0;
	for ( int i = 0; i<=1000; i++)
		if (maxcheck < check[i])
		{
			maxcheck = check[i];
			max = i;
		}
	cout << sum / 10 << endl;
    cout << max << endl;

	return 0;
}
