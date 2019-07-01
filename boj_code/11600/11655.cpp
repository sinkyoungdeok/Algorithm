#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[101];
	cin.getline(num, 101);
	int len = strlen(num);
	for (int i = 0; i < len; i++)
	{
		if ((num[i] > 'm' && num[i] <= 'z') || (num[i] > 'M' && num[i] <= 'Z'))
			num[i] -= 13;

		else if (('a' <= num[i] && num[i] <= 'm') || ('A' <= num[i] && num[i] <= 'M'))
		{
			num[i] += 13;
		}
		else
			continue;
	}
	cout << num << endl;
	return 0;
}

