#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		cout << a / b << " ";
		a %= b;
		cout << a << " / " << b << endl;

		cin >> a >> b;
	}
	return 0;
}
