#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[100000];
	cin >> num;
	if (num[0] == '0' && num[1] == 'x') //16진수
	{
		int six = 1;
		int sum = 0;
		for (int i = strlen(num) - 1; i > 1; i--)
		{
			if (num[i] == 'a')
				sum+=six * 10;
			else if (num[i] == 'b')
				sum += six * 11;
			else if (num[i] == 'c')
				sum += six * 12;
			else if (num[i] == 'd')
				sum += six * 13;
			else if (num[i] == 'e')
				sum += six * 14;
			else if (num[i] == 'f')
				sum += six * 15;
			else
				sum += (num[i] - '0') * six;
			six *= 16;
		}
		cout << sum << endl;
	}
	else if (num[0] == '0' && num[1] != 'x') //8진수
	{
		int eight = 1;
		int sum = 0;
		for (int i = strlen(num)-1; i > 0; i--)
		{
			sum += (num[i] - '0') * eight;
			eight *= 8;
		}
		cout << sum << endl;
	}
	else // 10진수 
	{
		for (int i = 0; i < strlen(num); i++)
			cout << num[i];
	}
	return 0;
}
