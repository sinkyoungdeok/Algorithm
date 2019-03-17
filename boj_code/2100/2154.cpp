#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string num = "";
	for (int i = 1; i <= 100000; i++)
		num += to_string(i);

	int n = 0;
	cin >> n;
	cout << num.find(to_string(n),0) +1 << endl;

	return 0;
}
