#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	while (n != 0 && m != 0)
	{
		if (n%m == 0)
			cout << "multiple" << endl;
		else if (m%n == 0)
			cout << "factor" << endl;
		else
			cout << "neither" << endl;

		cin >> n >> m;
	}
	return 0;
}
