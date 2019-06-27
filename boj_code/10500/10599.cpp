#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (a != 0 && b != 0 && c != 0 && d != 0)
	{
		cout << min(c, d) - max(a, b) << " ";
		cout << max(c, d) - min(a, b) << endl;

		cin >> a >> b >> c >> d;
	}
	return 0;
}
