#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int max = 0;
		int num = 0;
		for (int j = 0; j < 5; j++)
		{
			cin >> num;
			if (max < num)
				max = num;
		}
		cout << "Case #" << i << ": " << max << endl;

	}

	return 0;
}
