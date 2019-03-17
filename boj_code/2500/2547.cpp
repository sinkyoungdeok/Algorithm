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
		int n;
		cin >> n;
		long long int sum = 0;
		for (int j = 0; j < n; j++)
		{
			long long int num;
			cin >> num;
			sum = (sum+ num) % n;
		}
		if (sum)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;


	}


	return 0;
}
