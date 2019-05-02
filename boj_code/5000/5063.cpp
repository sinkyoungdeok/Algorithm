#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		int j = 0;
		int k = 0;
		cin >> a >> j >> k;
		if (a == j - k)
			cout << "does not matter" << endl;
		else if (a < (j - k))
			cout << "advertise" << endl;
		else
			cout << "do not advertise" << endl;

	}
	return 0;
}
