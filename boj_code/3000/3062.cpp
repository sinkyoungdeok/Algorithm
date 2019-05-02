#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		int b = 0;
		cin >> a;
		int dup_a = a;
		while (dup_a)
		{
			b *= 10;
			b += dup_a % 10;
			dup_a /= 10;
		}
		a += b;
		b = 0;
		dup_a = a;
		while (dup_a)
		{
			b *= 10;
			b += dup_a % 10;
			dup_a /= 10;
		}
		if (a == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
