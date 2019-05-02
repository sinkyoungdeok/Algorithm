#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	n = 1000 - n;
	int check = 0;
	if (n >= 500)
	{
		check += n / 500;
		n %= 500;
	}
	if (n >= 100)
	{
		check += n / 100;
		n %= 100;
	}
	if (n >= 50)
	{
		check += n / 50;
		n %= 50;
	}
	if (n >= 10)
	{
		check += n / 10;
		n %= 10;
	}
	if (n >= 5)
	{
		check += n / 5;
		n %= 5;
	}
	if (n / 1)
	{
		check += n / 1;
		n %= 1;
	}
	cout << check << endl;
	return 0;
}
