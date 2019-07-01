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

	int N;
	cin >> N;

	
	long long int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		sum += pow(input / 10, input % 10);
	}
	cout << sum << '\n';

	return 0;
}
