#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{ 
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		char num[101];
		cin.getline(num, 101);
		int num_len = strlen(num);
		int check = 0;
		if (num[0] == 'S' && num[1] == 'i' && num[2] == 'm' && num[3] == 'o' && num[4] == 'n' && num[6] == 's' && num[7] == 'a' && num[8] == 'y' && num[9] == 's')
		{
			for (int i = 10; i < num_len; i++)
			{
				cout << num[i];
				check = 1;
			}
		}
		if(check==1)
		cout << endl;



	}



	return 0;
}
