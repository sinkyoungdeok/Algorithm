#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[101];
	cin >> num;
	int len = strlen(num);
	int check = 1;
	for (int i = 0; i < 2; i++)
	{
		if (num[i] != num[len - 1 - i])
			check = 0;
	}
	cout << check << endl;

	return 0;
}
