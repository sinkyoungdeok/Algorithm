#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int cute = 0;
	int ncute = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == 1)
			cute++;
		else
			ncute++;
	}
	if (cute < ncute)
		cout << "Junhee is not cute!" << endl;
	else
		cout << "Junhee is cute!" << endl;
	return 0;
}
