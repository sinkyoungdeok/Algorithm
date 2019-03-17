#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	b = pow(10, b);
	if (a%b >= (b / 10) * 5)
	{
		a /= b;
		a *= b;
		a += b;
	}
	else
	{
		a /= b;
		a *= b;
	}
	cout << a << endl;
	return 0;
}
