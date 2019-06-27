#include <iostream>
#include <string.h>
using namespace std;
int num[101];
int main()
{
	char st[101];
	cin >> st;
	int num_i = 0;

	for (int i = 0; st[i] != NULL; i++)
	{
		if (st[i] != ',')
		{
			num[num_i] *= 10;
			num[num_i] += st[i] - '0';

		}
		else
			num_i++;
	}
	int sum = 0;
	for (int i = 0; i <= num_i; i++)
		sum += num[i];
	cout << sum << endl;
	return 0;
}
