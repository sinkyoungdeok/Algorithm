#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		
		if (a == 0)
			a = c / b;
		else if (b == 0)
			b = c / a;
		else if (c == 0)
			c = a * b;

		cout << a << " " << b << " " << c << endl;

	}

	return 0;
}
