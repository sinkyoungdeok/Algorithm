#include <iostream>
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
		string name;
		int cost = 0;
		string mxname;
		int maxcost = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> name >> cost;
			if (maxcost < cost)
			{
				maxcost = cost;
				mxname = name;
			}
		}
		cout << mxname << endl;
	}
	return 0;
}
