#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *n = new char[501];
	while (1)
	{
		cin.getline(n, 500);
		if ((n[0] == 'E' && n[1] == 'N' && n[2] == 'D'))
		{
			break;
		}
		else {
		for (int i = strlen(n) - 1; i >= 0; i--)
			cout << n[i];
		cout << endl;
	}
	}

	return 0;
}
