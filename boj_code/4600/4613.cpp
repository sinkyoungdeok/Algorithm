#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	//cout << (int)'B'-64 << endl;
	char *num = new char[260];
	cin.getline(num, 260);
	while (num[0] != '#')
	{
		int numlen = strlen(num);
		int sum = 0;
		for (int i = 0; i < numlen; i++)
		{
			if(num[i] !=' ')
			sum += (i + 1)*(int)(num[i]- 64);
		}

		cout << sum << endl;
		cin.getline(num, 260);
	}

	return 0;
}
