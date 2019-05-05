#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	int cnt = 1;
	while (1)
	{
		char a, b;
		cin >> a >> b;
		if (a == '#' && b == '#')
			break;
		cout << "Case " << cnt++ << endl;

		int n;
		cin >> n;
		cin.ignore();
		for (int i = 0; i < n; i++)
		{
			string num;
			getline(cin, num);
			for (int j = 0; j < num.length(); j++)
			{
				if (num[j] == a || num[j] == b || num[j]+32 == a || num[j]+32 == b)
					cout << "_";
				else
					cout << num[j];
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
