#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
// A=65, Z=90, a=97, z=122
int main()
{
	while (1)
	{
		string num;
		getline(cin, num);
		if (num[0] == '*')
			break;
		int numlen = num.length();

		if ('A' <= num[0] && num[0] <= 'Z')
			num[0] += 32;

		int check = 0;
		for (int i = 0; i < numlen; i++)
		{
			if (num[i] == ' ')
			{
				if ('A' <= num[i + 1] && num[i + 1] <= 'Z')
					num[i + 1] += 32;

				if (num[0] != num[i + 1])
				{
					check = 1;
					break;
				}
			}
		}
		if (check == 1)
			cout << "N"<<endl;
		else
			cout << "Y"<<endl;

	}


	return 0;
}
