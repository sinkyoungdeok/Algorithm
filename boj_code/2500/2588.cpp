#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin >> n >> m;
	int dupm = m;
	for (int i = 0; i < 3; i++)
	{
		cout << n * (m % 10) << endl;
		m = m / 10;
	}

	cout << dupm*n << endl;


	return 0;
}
