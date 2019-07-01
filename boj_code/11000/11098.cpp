#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m = 0;
		cin >> m;
		int *cost = new int[m];
		string *name = new string[m];
		int maxcost = 0;
		string maxnm;
		for (int j = 0; j < m; j++)
		{
			cin >> cost[j] >> name[j];
			if (maxcost < cost[j])
			{
				maxcost = cost[j];
				maxnm = name[j];
			}
		}


		cout << maxnm << endl;

	}

	return 0;
}
