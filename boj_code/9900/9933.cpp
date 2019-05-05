#include <cstdio>
#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string *num = new string[t];
	for (int i = 0; i < t; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < t; i++)
	{
		for (int j = i; j < t; j++)
		{
			string tmp = num[j];
			reverse(tmp.begin(), tmp.end());
			if (num[i] == tmp)
			{
				cout << tmp.length() << " " << tmp[tmp.length() / 2] << endl;
				return 0;
			}

		}

	}

	return 0;
}
