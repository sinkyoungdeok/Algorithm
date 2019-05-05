#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0; 
	int m = 0;
	int k = 0;
	cin >> n >> m >> k;
	if (n*m - k < 0)
		cout << "0" << endl;
	else
	cout << n * m - k << endl;

	return 0;
}
