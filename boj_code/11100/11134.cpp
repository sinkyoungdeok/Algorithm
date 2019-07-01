#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a%b == 0)
			a = a / b;
		else
			a = (a / b) + 1;


		cout << a << endl;
	}
	
	return 0;
}
