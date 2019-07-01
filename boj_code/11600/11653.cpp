#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n; 
	int i = 2;
	while (n != 1)
	{
		if (n%i == 0)
		{
			cout << i << endl;
			n = n / i;
			i = 2;
		}
		else
			i++;
	}
	return 0;
}
