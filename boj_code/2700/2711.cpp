#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m = 0; 
		cin >> m;
		char *num = new char[100];
		cin >> num;
		int len = strlen(num);
		num[m-1] = '\0';
		for (int i = 0; i < len; i++)
		{
			if (num[i] == '\0')
				continue;
			else
				cout << num[i];
		}
		cout << endl;

		



	}


	return 0;
}
