#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int A, B, C, D, P;
	cin >> A >> B >> C >> D;
	for (int i = 0; i < 3; i++)
	{
		cin >> P;
		int pcnt = 0;
		if (P % (A + B) <= A && P % (A + B) > 0)
			pcnt++;
		if (P % (C + D) <= C && P % (C + D) > 0)
			pcnt++;
		cout << pcnt << endl;
	}
	return 0;
}
