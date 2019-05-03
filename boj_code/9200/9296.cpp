#include <cstdio>
#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int j=1;j<=t;j++)
	{
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
				cnt++;
		}
		cout << "Case " << j << ": " << cnt << endl;
	}
	return 0;
}
