#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a = 1, b = 1, c = 1, d = 1;
	cin >> a >> b >> c >> d;
	while (!(a == 0 && b == 0 && c == 0 && d == 0))
	{
		int check = 0;
		while (!(a == b && b == c && c == d && d == a)) {
			int dup_a = a;
			int dup_b = b;
			int dup_c = c;
			int dup_d = d;
			a = abs(dup_a - dup_b);
			b = abs(dup_b - dup_c);
			c = abs(dup_c - dup_d);
			d = abs(dup_d - dup_a);
			check++;
		}
		cout << check << endl;
		cin >> a >> b >> c >> d;
	}

	return 0;
}
