#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		while (a.length() != 81) {
			a.insert(0, "0");
		}
		while (b.length() != 81) {
			b.insert(0, "0");
		}
		string sum = "";
		int carry = 0;
		for (int i = 80; i >= 0; i--)
		{
			int num = a[i] - '0' + b[i] - '0' + carry;
			if (num == 0)
			{
				carry = 0;
				sum.insert(0, "0");
			}
			else if (num == 1)
			{
				carry = 0;
				sum.insert(0, "1");
			}
			else if (num == 2)
			{
				carry = 1;
				sum.insert(0, "0");
			}
			else if (num == 3)
			{
				carry = 1;
				sum.insert(0, "1");
			}

		}
		while(sum[0] == '0')
			sum.erase(0, 1);
		if (sum.length() == 0)
			cout << "0" << endl;
		else
		cout << sum << endl;

	}
	return 0;
}
