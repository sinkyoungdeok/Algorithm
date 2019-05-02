#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[50]; 
	cin >> num;
	while (num[0] != '#')
	{
		int numlen = strlen(num);
		int onecheck = 0;
		for (int i = 0; i<numlen-1; i++)
		{
			if (num[i] == '1')
				onecheck++;
		}
		if (num[numlen - 1] == 'e')
		{
			if (onecheck % 2 == 0)
				num[numlen - 1] = '0';
			else
				num[numlen - 1] = '1';
		}
		else
		{
			if (onecheck % 2 == 0)
				num[numlen - 1] = '1';
			else
				num[numlen - 1] = '0';
		}

		cout << num << endl;
		cin >> num;
	}
	delete[]num;


	return 0;
}
