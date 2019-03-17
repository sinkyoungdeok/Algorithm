#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int acnt = -1;
	int bcnt = -1;
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i] == b[j])
			{
				acnt = i;
				bcnt = j;
				break;
			}
		}
		if (acnt != -1)
			break;
	}
	int blen = b.length();
	int alen = a.length();

	for (int i = 0; i <blen; i++)
	{
		for (int j = 0; j < alen; j++)
		{
			if (j == acnt && i == bcnt)
			{
				cout << a[0];
				a.erase(0, 1);
				b.erase(0, 1);
			}
			else if (j == acnt)
			{
				cout << b[0];
				b.erase(0, 1);
			}
			else if (i == bcnt)
			{
				cout << a[0];
				a.erase(0, 1);
			}
			else
				cout << ".";


		}
		cout << endl;
	}
	return 0;
}
