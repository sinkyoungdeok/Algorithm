#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <cmath>
#include <functional>
#include <map>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map < string, int, greater<string>> m;
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name, enter;
		cin >> name >> enter;
		if (enter == "enter")
			m[name] = 1;
		else
			m[name] = 0;
	}

	for (map<string, int, greater<string>>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->second == 1)
			cout << it->first << '\n';
	}

	return 0;
}
