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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int N, M;
		cin >> N >> M;

		cout << (2 * M) - N << " ";
		cout << M - ((2 * M) - N) << endl;

	}

	return 0;
}
