#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	a += b;
	int sum = 0;
	while (a >= c) {
		sum += a / c;
		a = a / c + a%c;
	}
	cout << sum << endl;
	return 0;
}
