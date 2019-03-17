#include <iostream>
using namespace std;
int main()
{
	int d,m;
	cin >> d >> m;
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char month[7][15] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday","Monday", "Tuesday" };
	for (int i = 0; i < m - 1; i++)
		d += day[i];
	cout << month[d%7] << endl;

	return 0;
}
