#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[101];
	cin >> num;
	int numlen = strlen(num);
	for (int i = 0; i < numlen; i++) {
		if (num[i] == 'C' || num[i] == 'A' || num[i] == 'M' || num[i] == 'B' || num[i] == 'R' || num[i] == 'I' || num[i] == 'D' || num[i] == 'G' || num[i] == 'E')
			num[i] = '\0';

	}

	for (int i = 0; i < numlen; i++)
	{
		if (num[i] != '\0')
			cout << num[i];
	}
	cout << endl;
	return 0;
}
