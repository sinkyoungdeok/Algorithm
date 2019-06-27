#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a.append(b);
	c.append(d);
	unsigned long long int anum=0;
	unsigned long long int cnum=0;
	for (int i = 0; i < a.length(); i++)
	{
		anum *= 10;
		anum += a[i] - '0';
	}
	for (int i = 0; i < c.length(); i++)
	{
		cnum *= 10;
		cnum += c[i] - '0';
	}
	cout << anum + cnum << endl;
	return 0;
}
