#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() // A=65, Z=90, a=97, z=122
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int check[100] = { 0 };
		string num;
		cin >> num;
		for (int j = 0; j < num.length(); j++)
		{
			if ('a' <= num[j] && num[j] <= 'z')
				check[(int)num[j]-32] = 1;
			else if('A' <= num[j] && num[j] <= 'Z')
				check[(int)num[j]] = 1;
		}
		int result = 0;
		for (int j = 65; j <= 77; j++)
		{
			if (check[j] == 1)
			{
				if (check[90 + 65 - j] == 0)
				{
					result = 1;
					break;
				}
			}

		}
		if (result == 1)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;



	}

	return 0;
}
