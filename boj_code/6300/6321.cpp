#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		char *num = new char[100];
		cin >> num;
		for (int j = 0; num[j] != NULL; j++)
		{
			if (num[j] == 'Z')
				num[j] = 'A';
			else
				num[j] ++;
		}
		cout << "String #" << i + 1 << endl;
		cout << num << endl << endl;
	}
	return 0;
}
