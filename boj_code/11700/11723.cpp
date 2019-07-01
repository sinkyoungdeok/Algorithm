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
	int num[21] = { 0 };

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		string input;
		int input_num;
		cin >> input;
		
		if (input == "add")
		{
			cin >> input_num;
			num[input_num] = 1;
		}
		else if (input == "remove")
		{
			cin >> input_num;
			num[input_num] = 0;
		}
		else if (input == "check")
		{
			cin >> input_num;
			if (num[input_num])
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "toggle")
		{
			cin >> input_num;
			if (num[input_num])
				num[input_num] = 0;
			else
				num[input_num] = 1;
		}
		else if (input == "all")
			for (int j = 1; j <= 20; j++)
				num[j] = 1;
		else
			for (int j = 1; j <= 20; j++)
				num[j] = 0;

	}
	return 0;
}
