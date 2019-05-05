#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int j = 0; j < n; j++) {
		char *num = new char[101];
		cin.getline(num, 100);
		int numlen = strlen(num);
		for (int k = 0; k < numlen; k++)
		{
			if ('A' <= num[k] && num[k] <= 'Z')
				num[k] += 32;
		}
		int len = strlen(num);
		int check = 1;
		for (int i = 0; i < (len / 2); i++)
		{
			if (num[i] != num[len - 1 - i])
				check = 0;
		}
		if (check == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
