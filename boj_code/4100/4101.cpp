#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0; int m = 0;
	cin >> n >> m;
	while (n != 0 && m != 0)
	{
		if (n <= m)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
		cin >> n >> m;
	}
	return 0;
}
