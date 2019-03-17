#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	unsigned long long int a, b, c;
	cin >> a >> b >> c;
	unsigned long long int dup_c = 0;
	int check = 0;
	if (c <= b)
	{
		cout << "-1" << endl;
		return 0;
	}
	cout << a / (c - b) + 1 << endl;
	return 0;
}
