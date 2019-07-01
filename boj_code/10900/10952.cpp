#include <iostream>
using namespace std;
int main()
{
	int n = 1;
	int m = 1;
	while (1)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			return 0;
		cout << n + m << endl;
	}


	return 0;
}
