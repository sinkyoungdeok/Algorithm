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
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a, b;
		cin >> a >> b;
		int sum = (b * (b + 1)) / 2;
		cout << a << " " << sum << " " << sum * 2 - b << " " << sum*2 << endl;
	}
}
