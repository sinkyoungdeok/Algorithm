#include <cstdio>
#include <stack>
#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		if (input == n)
			cnt++;
	
	}
	cout << cnt << endl;
	return 0;
}
