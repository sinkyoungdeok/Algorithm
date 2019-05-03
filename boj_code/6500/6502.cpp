#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for(int i=1;;i++)
	{
		int r, w, l;
		cin >> r;
		if (r == 0) break;
		cin >> w >> l;
		cout << "Pizza " << i;
		if (2 * r >=sqrt(w*w + l * l)  ) cout << " fits on the table.\n";
		else cout << " does not fit on the table.\n";



	}
	return 0;
}
