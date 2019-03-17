#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int check = 0;
	if (n % 100 != 0 || n % 400 == 0)
	{
		if (n % 4 == 0)
			check = 1;
	}
	cout << check << endl;
	return 0;
}
