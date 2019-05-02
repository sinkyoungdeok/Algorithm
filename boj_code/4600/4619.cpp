#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (1)
	{
		if (a == 0 && b == 0)
			return 0;
		int An = 0;
		int i = 1;
		for ( ;An<a ; An = pow(i++, b))
		{}
		if (An - a > a - pow(i-2, b))
			cout << i-2 << endl;
		else
			cout << i-1 << endl;

		cin >> a >> b;
	}
	return 0;
}
