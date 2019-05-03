#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;
	int *num = new int[n];
	cin >> num[0];
	for (int i = 1; i < n; i++) {
		cin >> num[i];
		num[i] += num[i - 1];
	}

	while (m--)
	{
		int a, b;
		cin >> a >> b;
		if (a == 1)
			cout << num[b - 1] << endl;
		else
		cout << num[b - 1] - num[a - 2] << endl;
	}

	return 0;
}
