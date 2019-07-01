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
	string num;
	cin >> num;
	int cnt = 0;
	for (int i = 0; i < num.length(); i++)
	{
		if (i % 3 == 0)
		{
			if (num[i] != 'P')
				cnt++;
		}
		else if (i % 3 == 1)
		{
			if (num[i] != 'E')
				cnt++;
		}
		else
			if (num[i] != 'R')
				cnt++;

	}
	cout << cnt << endl;

	return 0;
}
