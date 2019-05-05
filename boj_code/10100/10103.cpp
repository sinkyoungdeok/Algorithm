#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int CK = 100;
	int CD = 100;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a < b)
		{
			CK -= b;
		}
		else if (a > b)
		{
			CD -= a;
		}


	}
	cout << CK << endl << CD << endl;
	return 0;
}
