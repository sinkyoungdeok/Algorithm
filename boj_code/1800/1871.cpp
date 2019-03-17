#include <iostream>
using namespace std;
int main()
{//A== -65
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[8];
		cin >> num;
		int a = 0;
		int b = 0;
		a += (((int)num[0] - 65) * 26 * 26);
		a += (((int)num[1] - 65) * 26);
		a += (((int)num[2] - 65));
		b += ((num[4] - '0') * 1000);
		b += ((num[5] - '0') * 100);
		b += ((num[6] - '0') * 10);
		b += ((num[7] - '0'));
		if (-100 <= a - b && a - b <= 100)
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;
	}
	return 0;
}
