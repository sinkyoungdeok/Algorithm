#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n = 1;
	int m = 1;
	cin >> n >> m;
	while (n != 0 && m != 0)
	{
		cout << n + m << endl;
		cin >> n >> m;
	}
	return 0;
}
