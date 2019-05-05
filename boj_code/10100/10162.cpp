#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int check1 = 0;
	int check2 = 0;
	int check3 = 0;
	if (n >= 300 )
	{
		check1 = n / 300;
		n=n % 300;
	}

	if (n >=60)
	{
		check2 = n / 60;
		n = n % 60;
	}
	if (n >= 10)
	{
		check3 = n / 10;
		n = n % 10;
	}
	if (n != 0)
		cout << "-1" << endl;
	else
	{
		cout << check1 << " " << check2 << " " << check3 << endl;
	}

	return 0;
}
