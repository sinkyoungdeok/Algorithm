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
	int n, T;
	cin >> n >> T;
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		sum += num;
		if (sum <= T)
			cnt++;

	}
	cout << cnt << endl;



	return 0;
}
