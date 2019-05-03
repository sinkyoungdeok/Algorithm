#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	char *num1 = new char[100];
	char *num2 = new char[100];
	cin >> num1 >> num2;
	int num1len = strlen(num1) - 1;
	int num2len = strlen(num2) - 1;

	int *newnum = new int[1000000];
	int newnum_len = 0;
	int maxlen = max(num1len, num2len);
	for (int i = 0; i <= maxlen; i++) {
		if(num1len >=0 && num2len>=0)
			newnum[newnum_len++] = (num1[num1len--] - '0') + (num2[num2len--] - '0');
		else if(num1len == -1)
			newnum[newnum_len++] = (num2[num2len--] - '0');
		else
			newnum[newnum_len++] = (num1[num1len--] - '0');
		

	}
	while (newnum_len)
	{
		cout << newnum[--newnum_len];
	}
	


	return 0;
}
