#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
// A=65, Z=90, a=97, z=122
int main()
{
	int f0 = 0;
	int f1 = 1;
	int n;
	cin >> n;
	int f2;
	for (int i = 2; i <= n + 1; i++)
	{
		f2 = (f0 + f1) % 15746;
		f0 = f1;
		f1 = f2;
	}
	cout << f2 << endl;
	return 0;
}
