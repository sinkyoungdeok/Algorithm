#include <iostream>
using namespace std;
int main()
{
	int t, m, s;
	cin >> t >> m >> s;
	int num = 0;
	cin >> num;
	
	if (num >= 3600)
	{
		t += num / 3600;
		num %= 3600;
	}
	if (num >= 60)
	{
		m += num / 60;
		num %= 60;
	}
	s += num;

	if (s >= 60)
	{
		m += s / 60;
		s %= 60;
	}
	if (m >= 60)
	{
		t += m / 60;
		m %= 60;
	}
	if (t >= 24)
		t %= 24;
	cout << t << " " << m << " " << s << endl;

	return 0;
}
