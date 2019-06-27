#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m = 0; 
		cin >> m;
		int num[1001] = { 0, };
		for (int j = 0; j < m; j++)
		{
			int input = 0;
			cin >> input;
			num[input]++;
		}
		int max = 0;
		for (int j = 1; j <= 1000; j++)
			if (max < num[j])
				max = num[j];
		for (int j = 1; j <= 1000; j++)
			if (max == num[j])
			{
				cout << j << endl;
				break;
			}
	}
	return 0;
}
