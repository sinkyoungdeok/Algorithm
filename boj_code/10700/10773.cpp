#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int num = 0;
	int *stock = new int[n];
	int stock_num = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num != 0)
		{
			stock[stock_num++] = num;
		}
		else
		{
			stock[--stock_num] = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i < stock_num; i++)
	{
		sum += stock[i];
	}
	cout << sum << endl;


	return 0;
}
