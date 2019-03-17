#include <iostream>
using namespace std;
int main()
{
	long long int n;
	long long int m;
	cin >> n >> m;
	if (n - m > 0)
		cout << n - m << endl;
	else
		cout << m - n << endl;
	return 0;
}
