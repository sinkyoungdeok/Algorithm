#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double m = 0;
		cin >> m;
		char oper[100];
		cin.getline(oper, 100);
		for (int i = 0; oper[i] != NULL; i++)
		{
			if (oper[i] == ' ')
				continue;
			else if (oper[i] == '@')
				m *= 3;
			else if (oper[i] == '%')
				m += 5;
			else if (oper[i] == '#')
				m -= 7;
		}
		printf("%.2f \n", m);

	}
	return 0;
}
