#include <iostream>
using namespace std;
int num[101];
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = x; j < y; j++)
			num[j]++;
	}
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (num[i] == 1)
			sum += a;
		else if (num[i] == 2)
			sum += b * 2;
		else if ( num[i] ==3)
			sum += c * 3;
	}
	cout << sum << endl;
	return 0;
}
