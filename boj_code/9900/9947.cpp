#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	while (1)
	{
		string a, b;
		cin >> a >> b;
		if (a == "#" && b == "#")
			break;
		int n;
		int acnt = 0;
		int bcnt = 0;

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			char c, d;
			cin >> c >> d;
			if (c == d)
				acnt++;
			else
				bcnt++;

		}
		cout << a << " " << acnt << " " << b << " " << bcnt << endl;

	}
	return 0;
}
