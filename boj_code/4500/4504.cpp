#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int m = 1;
	while (1)
	{
		cin >> m;
		if (m == 0)
			break;
		if (m % n == 0)
			cout << m << " is a multiple of " << n <<"."<<endl;
		else
			cout << m << " is NOT a multiple of " << n << "."<< endl;
	}
	return 0;
}
