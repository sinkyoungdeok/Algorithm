#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	long long int n = 0;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		char num[1000];
		cin >> num;
		int numlen = strlen(num);
		if ((num[numlen-1]-'0') % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}
